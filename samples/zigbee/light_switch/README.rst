.. _zigbee_light_switch_sample:

Zigbee: Light switch
####################

The Zigbee light switch sample can be used to change the state of light sources on other devices within the same Zigbee network.

You can use this sample together with :ref:`zigbee_network_coordinator_sample` and :ref:`zigbee_light_bulb_sample` to set up a basic Zigbee network.

Overview
********

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

LED 1 and LED 2:
    Indicates the BLE status:

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
