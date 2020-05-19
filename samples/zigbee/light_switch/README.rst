.. _zigbee_light_switch_sample:

Zigbee: Light switch and BLE UART
####################

The Zigbee light switch sample can be used to change the state of light sources on other devices within the same Zigbee network. If the :ref:`nus_service_readme` is enabled, it also supports dynamic switching between two protocols, BLE and Zigbee, at the same time (concurrently). 

You can use this sample together with :ref:`zigbee_network_coordinator_sample` and :ref:`zigbee_light_bulb_sample` to set up a basic Zigbee network.

Overview
********

This example uses at least three devices:

 * Zigbee light switch (multiprotocol)
 * Zigbee coordinator
 * Zigbee light bulb (one or more)

The light switch sample demonstrates the Zigbee End Device role and implements the Dimmer Light Switch profile.

Once the light switch is successfully commissioned, it sends a broadcast message to find any devices with the implemented Level Control and On/Off clusters.
The light switch remembers the device network address from the first response and can be controlled with the development kit buttons.

The switch does support the Sleepy End Device behavior, meaning that the stack can make the CPU enter the sleep mode, which results in a significant conservation of energy and prolonged battery life.
The device will automatically wake itself up on an event.
Moreover, the CPU will wake itself from time to time to ensure the correct processing of stack internals.

Zigbee light switch with ZCL Groups
===================================

This sample also incorporates a light switch with the ZCL Groups functionality.
Such switch sends a broadcast message to find the devices with implemented Level Control and On/Off clusters, but instead of controlling the first discovered light bulb, it creates a group out of all the suitable devices and controls them at once.

See also `Testing Zigbee light switch with ZCL Groups`_.

Zigbee light switch with NUS
===================================

The light switch device operates through pressing buttons on the DK on the Zigbee network, and through the Nordic UART Service on the BLE network. Both networks are independent from each other. Three different Zigbee Endpoints are instantiated on the light switch (with numbers 1, 2, and 3), with the possibility to trigger Finding & Binding process on each of them.

To support both protocols at the same time, the Zigbee stack uses the 802.15.4 radio during the inactive time of the Bluetooth Low Energy radio (using Timeslot API). Depending on the Bluetooth Low Energy connection interval, the nRF52 SoC can spend up to 99% of the radio time on the Zigbee protocol. This is the same mechanism as the one used in Dynamic multiprotocol examples in Thread. Transmitting and receiving data when using this example does not break connection from any of the used radio protocols, either BLE or Zigbee.

For more information on multiprotocol operation, refer to the Multiprotocol support with BLE/Bluetooth support section.

Setup
===================================

This sample is split into two source files:
 * A main file to handle initializaton and switch basic behavior.
 * One additional file for handling NUS commands.

To show the basic behavior of the device, you need two other examples that contain a Zigbee network coordinator and a Zigbee light bulb. With these two examples, you can control the light bulb (On/Off and Level Control clusters).

The light switch of this example can be used with the CLI Agent example to establish control with a light bulb.

Assignments
===================================
You can control the devices either with the buttons on the development kits or the NUS UART commands in the nRF Toolbox application. The NUS UART commands offer more options than the DK buttons.

Requirements
************

* One or more of the following development kits:

  * |nRF52840DK|
  * |nRF52833PDK|

* The :ref:`zigbee_network_coordinator_sample` application programmed on one separate device.
* The :ref:`zigbee_light_bulb_sample` application programmed on one or more separate devices.

  .. note::
      If you want to use `Zigbee light switch with ZCL Groups`_, program the light bulb on at least three development kits.

You can mix different development kits.

.. _zigbee_light_switch_user_interface:

User interface
**************

LED 1:
    Used inside multiprotocol examples to indicate the BLE connection state.
 
        * Blinking -- BLE advertising ongoing.
        * Slow blinking (period of 200 ms when on, period of 800 ms when off) -- Device is not connecting to a Zigbee mesh network.
        * Rapid blinking (period of 100 ms) -- Device is connecting to a Zigbee mesh network.
        * Solid -- Device is connected over BLE.

LED 3:
    Indicates whether the device is connected to a Zigbee network.

LED 4:
    Indicates that the light switch has found a light bulb to control.

Button 1:
    When the light bulb has been turned off, pressing this button once turns it back on.
    When pressed for a longer period of time, increases the brightness of the light bulb.

Button 2:
    After the successful commissioning (LED 3 turned on), pressing this button once turns off the light bulb connected to the network (light bulb's LED 4).
    When pressed for a longer period of time, decreases the brightness of the LED 4 of the connected light bulb.

.. note::
    If the brightness level is decreased to the minimum, the effect of turning on the light bulb might not be noticeable.

Button 3:
    When pressed while resetting the board, enables the Sleepy End Device behavior.

Button 4:
    When pressed, toggles the Finding & Binding mode on the local endpoint on or off.


BLE UART command assignments
************

The following BLE UART commands are configured in this example:

+---------+----------------------------------------------------------+
| Command | Effect                                                   |
+=========+==========================================================+
| n       | Turns on the Zigbee light bulb.                          |
+---------+----------------------------------------------------------+
| f       | Turns off the Zigbee light bulb.                         |
+---------+----------------------------------------------------------+
| t       | Toggles the Zigbee light bulb on or off.                 |
+---------+----------------------------------------------------------+
| i       | Increases the brightness level of the Zigbee light bulb. |
+---------+----------------------------------------------------------+
| d       | Decreases the brightness level of the Zigbee light bulb. |
+---------+----------------------------------------------------------+

Building and running
********************

.. |sample path| replace:: :file:`samples/zigbee/light_switch`

.. include:: /includes/build_and_run.txt

.. _zigbee_light_switch_testing:

Testing
=======

After programming the sample to your development kits, test it by performing the following steps:

1. Turn on the coordinator development kit.
   When LED 3 turns on, the development kit has become the coordinator of the Zigbee network.
#. Turn on the light bulb development kit.
   When LED 3 turns on on the light bulb development kit, it has become a Router inside the network.

   .. tip::
        If LED 3 does not turn on, press Button 1 on the coordinator to reopen the network.

#. Turn on the light switch development kit.
   When LED 3 turns on on the light switch development kit, it has become an End Device, connected directly to the Coordinator.
#. Wait until LED 4 on the light switch node turns on.
   This LED indicates that the switch found a light bulb to control.

You can now use buttons on the board to control the light bulb, as described in :ref:`zigbee_light_switch_user_interface`.

Testing Zigbee light switch with ZCL Groups
-------------------------------------------

The testing procedure is similar to the :ref:`default testing procedure <zigbee_light_switch_testing>`, but you need to have the light bulb programmed on at least three development kits.
The light bulb nodes all become Routers inside the network.

After turning all boards on, you can use buttons on the board to control the light bulbs, as described in :ref:`zigbee_light_switch_user_interface`.

Interacting with the boards
-------------------------------------------

You can toggle the LED on the light bulb board bound to the currently selected endpoint in the network by pressing **Button 1** and **Button 2** on the light switch board.

After configuration, you can also start interacting with the boards using the nRF Toolbox application:

    1. On the smartphone, install nRF Toolbox for BLE.
    2. Open nRF Toolbox and select the **UART** application.

    .. figure:: /images/nrftoolbox_dynamic_zigbee_uart_1.png
       :alt: nRF Toolbox - UART application

       nRF Toolbox - UART application

    3. Tap **EDIT**.
    4. Configure the following nine application buttons (also listed in the BLE UART command assignments table):
     * Configure command n
     * Configure command f
     * Configure command t
     * Configure command i
     * Configure command d

    .. figure:: /images/nrftoolbox_dynamic_zigbee_uart_2.png
       :alt: nRF Toolbox - UART application - Configure button

       nRF Toolbox - UART application - Configure button

    5. When all buttons are configured, tap **DONE**.
    6. Tap **CONNECT** and select the **Zigbee_Switch** light switch device.

    .. figure:: /images/nrftoolbox_dynamic_zigbee_uart_3.png
       :alt: nRF Toolbox - UART application after establishing the connection

       nRF Toolbox - UART application after establishing the connection

    7. Observe that **LED1** on the multiprotocol light switch board is turned on and stops blinking, which indicates that a BLE connection has been established.
    8. Test the application buttons by pressing the buttons you assigned in the application in step 4:
     * n and f commands: Press the corresponding buttons to turn the LED on the Zigbee light bulb node on and off, respectively.
     * t command: Press the corresponding button two times to toggle the LED on the Zigbee light bulb node on and off.
     * i and d commands: Press the corresponding buttons to adjust the brightness level.

Testing the [v] command
-------------------------------------------
To test the delayed toggle command ([v] command in the BLE UART command assignments table), add another button with the numeric command or create a separate configuration (screen).

.. figure:: /images/nrftoolbox_dynamic_zigbee_uart_4.png
   :alt: nRF Toolbox - Add configuration

   nRF Toolbox - Add configuration

For example, you can add buttons to toggle the light bulb after 1 (1 command), 3 (3 command), and 9 (9 command) seconds.

.. figure:: /images/nrftoolbox_dynamic_zigbee_uart_5.png
   :alt: nRF Toolbox - Delayed toggle commands

   nRF Toolbox - Delayed toggle commands

Dependencies
************

This sample uses the following |NCS| libraries:

* Zigbee subsystem:

  * ``zb_nrf_platform.h``
  * ``zigbee_helpers.h``
  * ``zb_error_handler.h``

* :ref:`dk_buttons_and_leds_readme`

This sample uses the following `nrfxlib`_ libraries:

* ZBOSS Zigbee Stack

In addition, it uses the following Zephyr libraries:

* ``include/zephyr.h``
* ``include/device.h``
* :ref:`zephyr:settings`
* :ref:`zephyr:logger`
* :ref:`zephyr:pwm_interface`
