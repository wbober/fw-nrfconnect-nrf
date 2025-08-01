.. _glossary:

Glossary
########

.. contents::
   :local:
   :depth: 2

.. glossary::
   :sorted:

   Access port protection mechanism (AP-Protect)
      A mechanism used to prevent read and write access to all CPU registers and memory-mapped addresses.
      In the |NCS|, it uses ``APPROTECT`` registers and several Kconfig options, as described in :ref:`app_approtect`.
      See also :term:`Secure access port protection mechanism (Secure AP-Protect)`.

   Advanced eXtensible Interface (AXI) Communication
      A system that transfers data between components inside a computer or between computers.

   AHB Access Port (AHB-AP)
      An Arm Coresight component that allows a debug probe to access CPU cores for programming and debugging.
      Access through the AHB-AP can be blocked with :term:`Access port protection mechanism (AP-Protect)`.

   Almanac data
      In the :term:`Global Navigation Satellite System (GNSS)`, the data providing coarse orbit and status information for each satellite in the constellation.
      Each satellite broadcasts Almanac data for all the satellites in the constellation.

   Anycast addressing
      An addressing type that routes datagrams to a single member of a group of potential receivers that are all identified by the same destination address.
      This is a one-to-nearest association.

   API call return code
      An indication of success or failure of an API call.
      In case of failure, a comprehensive error code indicating the cause or reason for the failure is provided.

   Application
      An implementation example that includes a variety of libraries to implement a specific use case.
      It is possible to create a programmable image from it, as it includes a ``main()`` entry point.

   Application Programming Interface (API)
      A language and message format used by a program to communicate with an operating system, application, or other services.

   Assisted GNSS (A-GNSS)
      A form of assistance provided to devices trying to obtain a :term:`Global Navigation Satellite System (GNSS)` fix.
      It improves the :term:`Time to First Fix (TTFF)` by utilizing a connection (for example, over cellular) to the internet to retrieve the :term:`almanac data` and :term:`ephemeris data`.
      A connection to an internet server that has the almanac and ephemeris data is several times quicker than using the data link to the GNSS satellites.

   Association
      The process of adding a provisioned device to a cloud account using the device ID.

   Attribute Protocol (ATT)
      "[It] allows a device referred to as the server to expose a set of attributes and their associated values to a peer device referred to as the client."
      `Bluetooth Core Specification`_, Vol 3, Part F, Section 1.1.

   AT command
      A command used to control the modem.

   Band-Pass Filter (BPF)
      An electronic device or circuit that passes frequencies within a certain range and rejects frequencies outside that range.

   Basic Service Set Identifier (BSSID)
      The MAC address of an access point.

   BELLBOARD
      A peripheral associated with a given core that provides support for the inter-domain SW signaling.
      It includes a set of tasks and events intended for signaling within an interprocessor communication (IPC) framework.

   Bill of materials (BoM)
      List of the raw materials, sub-assemblies, intermediate assemblies, sub-components, parts, and the quantities of each needed to manufacture an end product.

   Binary Convolutional Codes (BCC)
      A type of error-correcting code that generates parity symbols using the sliding application of a boolean polynomial function to a data stream.

   Bluetooth® LE Controller layer
      A layer of the Bluetooth LE protocol stack that implements the :term:`Link Layer (LL)`.

   Bluetooth® LE Host layer
      A layer of the Bluetooth LE protocol stack comprised of multiple (non real-time) network and transport protocols enabling applications to communicate with peer devices in a standard and interoperable way.

   Board
      In Zephyr and the |NCS|, a target system with a defined set of devices and capabilities, which can load and execute an application image.
      A board can contain one or more :term:`System on Chip (SoC)` and follows Zephyr's :ref:`zephyr:hw_support_hierarchy`.

      This hierarchy is reflected in the file structure used to describe the board.
      The file structure includes :term:`devicetree <Devicetree>` files describing the hardware, :term:`Kconfig files <Kconfig file>` and :term:`fragments <Kconfig fragment>` defining its default software configuration, and may include target-specific source files, documentation, and other metadata.

      The file structure for boards matches the :ref:`zephyr:board_terminology`, which defines the board targets available for the given board.
      You can choose a board target for your application when you are :ref:`adding or editing a build configuration <building>`.

      For the list of boards supported by the |NCS|, see :ref:`app_boards`.

   Board Information Configuration Registers (BICR)
      Non-volatile memory (NVM) registers that contain information on how the SoC must interact with other board elements, including the information about the power and clock delivery to the SoC.

   Branch
      A line of development composed of a sequence of Git :term:`commits <Commit>`.

   Broadcast Isochronous Stream (BIS)
      A configuration of the :term:`Isochronous channels (ISO)` feature of the :term:`LE Audio` standard.
      In this configuration, one audio source can broadcast audio to multiple audio receivers.

   Buffer Status Report (BSR)
      Carries the information on the amount of data available for each Logical Channel Group (LCG) from UE to eNB.
      From Wi-Fi® perspective, BSR indicates the amount of queued uplink data buffered in the respective STA and access categories to which the queued data belong.

   Build configuration
      A set of build scripts.
      The build configuration is created by :ref:`CMake <zephyr:build_overview>` by executing the build scripts from :file:`CMakeLists.txt` during the :ref:`configuration_system_overview_config` of the build process.
      At this stage, CMake gathers configuration from different sources to produce a set of output files that will drive the build process.
      The different sources can include source files such as :file:`main.c` and configuration input files such as :ref:`Devicetree <configure_application_hw>` and :ref:`Kconfig <configure_application_sw>` files.
      The build scripts are then used during the :ref:`configuration_system_overview_build` to create the application firmware.

   Build type
      A build type is a feature that defines the way in which the configuration files are to be handled.
      The |NCS| provides support for handling :ref:`app_build_additions_build_types`
      :ref:`Selecting a specific build type <cmake_options>` can result in a different structure of the :term:`build configuration`.

      .. note::
           Build types are deprecated and are being gradually replaced by Zephyr's :ref:`file suffixes <modifying_build_types>` and :ref:`zephyr:sysbuild`.

   Carrier-sense Multiple Access with Collision Avoidance (CSMA/CA)
      A network multiple access method in which carrier sensing is used, but nodes attempt to avoid collisions by beginning transmission only after the channel is sensed to be idle.

   Carrier Wave (CW)
      A single-frequency electromagnetic wave that can be modulated in amplitude, frequency, or phase to convey information.

   Cat-M1
      LTE-M User Equipment (UE) category with a single RX antenna, specified in 3GPP Release 13.

   Cat-NB1
      Narrowband Internet of Things (NB-IoT) User Equipment (UE) category with 200 kHz UE bandwidth and a single RX antenna, specified in 3GPP Release 13.

   Certificate-Authenticated Session Establishment (CASE)
      A method of establishing a secure session between two network nodes, using the operational credentials obtained by the nodes during their commissioning into the network.

   Chain of Trust
      A concept related to `Platform Security Architecture (PSA)`_.
      A sequence of properties identifying the trustworthiness of each layer in the system, all the way back to a property in the system referred to as :term:`Root of Trust (RoT)`.
      A secure system depends on building and maintaining a chain of trust through all the layers in the system.
      Each step in this chain guarantees that the next step can be trusted to have certain properties because any unauthorized modification of a subsequent step will be detected and the process halted.
      You can read more about this concept in the |NCS| in the :ref:`bootloader documentation <ug_bootloader_chain_of_trust>`.

   Clear to Send (CTS)
      In :term:`flow control <Hardware Flow Control (HWFC)>`, the receiving end is ready and telling the far end to start sending.

   Clone
      A copy of a Git :term:`repository <Repository>` obtained using the command ``git clone``.

   Cluster
      In the context of a :ref:`Matter <ug_matter>` or :ref:`Zigbee <ug_zigbee>` network, a cluster is a representation of a single functionality within the network.
      Each cluster contains attributes that are stored in the device’s memory and commands that can be used to modify or read the state of the device, including the cluster attributes.
      Clusters appropriate for a single device type such as a sensor or a light bulb are organized into an addressable container that is called an endpoint.

   Commissioning
      In a thread mesh network, the process of authenticating and joining new devices to the network.

   Commit
      A snapshot of the state of a :term:`repository <Repository>` at a specific moment in time, along with its previous development history.
      It is associated with a unique SHA and a message describing the edits it contains.

   Commit tag
      A tag prepended to the first line of the commit message to ease filtering and identification of particular :term:`commit <Commit>` types.

   Companion component
      A firmware component that is independent from the application and is included in your project as a separate firmware image.
      The |NCS| provides several :ref:`companion components <companion_components>` tailored for different purposes.

   Connected Isochronous Stream (CIS)
      A configuration of the :term:`Isochronous channels (ISO)` feature of the :term:`LE Audio` standard.
      In this configuration, one audio source sends the audio data using both the left and the right ISO channels at the same time, allowing for stereophonic sound reproduction with synchronized playback.

   Contribution
      A change to the codebase sent to a remote :term:`repository <Repository>` for inclusion.

   Convergence Layer (CVG)
      The CVG layer is not always present in all protocol stacks.
      It can be found above the :term:`Data Link Control Layer (DLC)` and acts as an abstraction layer between the network layer and the lower layers (PHY, MAC, DLC).

   Core
      Subsets of :term:`domains <Domain>`.
      Most memory and peripherals can be flexibly allocated to cores at compile time.

   Cortex Microcontroller Software Interface Standard (CMSIS)
      A vendor-independent hardware abstraction layer for the Cortex-M processor series that defines generic tool interfaces.

   Cortex-M Security Extensions (CMSE)
      A group term for different security extensions for the Arm Cortex-M33 processor.
      In the |NCS|, this term is used in the context of `ARM TrustZone`_ and :ref:`app_boards_spe_nspe` (:term:`Non-Secure Processing Environment (NSPE)` and :term:`Secure Processing Environment (SPE)`).

   CRACEN
      A hardware crypto accelerator within nRF54L Series devices, and the name of the :term:`cryptographic driver <Cryptographic driver>` in the |NCS|.
      For more information, see :ref:`ug_nrf54l_crypto_kmu_cracen_peripherals` on the :ref:`ug_nrf54l_cryptography` page.

   Cryptographic driver
      A specialized component that implements specific cryptographic algorithms or provides access to hardware accelerators.
      See :ref:`crypto_drivers` for more information.

   Data Terminal Ready (DTR)
      A control signal in RS-232 serial communications transmitted from data terminal equipment, such as a computer, to data communication equipment.

   Data Link Control Layer (DLC)
      The DLC layer resides above the :term:`Medium Access Control layer (MAC)` in a protocol stack.
      It is responsible for reliable and error-free data transfer between network entities.

   Delivery Traffic Indication Message (DTIM)
      A type of :term:`Traffic Indication Map (TIM)` that informs the clients about the presence of buffered multicast or broadcast data on the access point.
      It is generated within the periodic beacon at a frequency specified by the DTIM Interval.
      It is used by the device to control wake and sleep periods.

   Development Kit (DK)
      A hardware development platform used for application development.
      See :ref:`app_boards_names` for more information.

   Device
      A piece of hardware that is considered together with the software it is running.
      For example, this can be a :term:`development kit (DK)` provided by Nordic Semiconductor and programmed with a sample from the |NCS|, a prototyping platform such as Nordic Thingy:53 programmed with the :ref:`Matter weather station <matter_weather_station_app>` application, or the nPM1300 EK connected to a compatible development kit.
      These can also be third-party development kits compatible with Nordic :term:`boards <Board>` or end-user devices.

   Device Firmware Update (DFU)
      A mechanism for upgrading the firmware of a device.

   Devicetree
      A data structure for describing hardware and its boot-time configuration, including :term:`SoC <System on Chip (SoC)>` peripherals, boot-time clock frequencies, and interrupt lines.

   Devicetree Specification (DTSpec)
      A document that defines the source and binary representations of a :term:`devicetree <Devicetree>`, along with some common characteristics of the data structure, such as interrupts and memory addressing.

   Device Under Test (DUT)
      A manufactured product undergoing testing.

   Dynamic Voltage and Frequency Scaling (DVFS)
      A power management technique that allows adjusting the operating voltage and operating frequency of a CPU, depending on the workload.

   Dynamic Host Configuration Protocol (DHCP)
      A network management protocol used for automatic and centralized management of IP addresses within a network.

   Docker
      A set of software tools using OS-level virtualization to create and run applications and their dependencies in self-contained environments called :term:`Docker containers <Docker container>`.

   Docker container
      A self-contained environment created by running a :term:`Docker container image` in the :term:`Docker engine`.

   Docker container image
      A standard set of binary data that contains an application (or more than one) and all the required dependencies.
      When run on the :term:`Docker engine`, it creates a :term:`Docker container`.

   Docker engine
      The :term:`Docker container` runtime that runs :term:`Docker images <Docker container image>`.

   Domain
      Functional blocks included in the system/SoC.
      Contains the user-programmable main CPU and its associated functions.

   Domain Name System (DNS)
      A hierarchical distributed naming system for computers, services, or any resource connected to the Internet or a private network.
      It associates various information with domain names assigned to each of the participating entities.
      Most prominently, it translates domain names, which can be easily memorized by humans, to the numerical IP addresses needed for computer services and devices worldwide.
      The Domain Name System is an essential component of the functionality of most Internet services because it is the Internet's primary directory service.

   Downlink (DL)
     A signal coming from the :term:`Evolved Node B (eNB)` to the :term:`User equipment (UE)`.

   Downstream fork
      A :term:`repository <Repository>` located downstream, relative to another repository, in the flow of information.
      See :ref:`dm_repo_types`.

   Easy Direct Memory Access (EasyDMA)
      A module that some peripherals implement to gain direct access to data RAM.

   Electromagnetic Compatibility (EMC)
      A measure of how well electrical equipment coexists with its electromagnetic environment without causing or experiencing interference.

   Electrostatic Discharge (ESD)
      A sudden discharge of electric current between two electrically charged objects.

   Embedded Universal Integrated Circuit Card (eUICC)
      A component of a SIM card that enables switching Mobile Network Operators over-the-air.

   Endpoint
      In the context of a :ref:`Matter <ug_matter>` or :ref:`Zigbee <ug_zigbee>` network, an addressable container that contains *clusters* appropriate for a single device type such as a sensor or a light bulb.

   Enhanced ShockBurst (ESB)
      A basic protocol supporting two-way data packet communication including packet buffering, packet acknowledgment, and automatic retransmission of lost packets.
      ESB provides radio communication with low power consumption.
      The implementation is small in code size and easy to use.

   Ephemeris data
      In the :term:`Global Navigation Satellite System (GNSS)`, the data providing information about the orbit of the satellite transmitting it.
      This data is valid for four hours and becomes inaccurate after that.

   eUICC Identifier (EID)
      A unique global serial number of an :term:`Embedded Universal Integrated Circuit Card (eUICC)`.

   Evaluation Kit (EK)
      A platform used to evaluate different development platforms.

   Evolved Node B (eNB)
      Base stations connected to the network that communicate wirelessly with mobile handsets in a 4G LTE network or 5G non-standalone (NSA) mode.

   Expansion Board (EB)
      A printed circuit board assembly that you can connect to other development hardware to give it added functionalities and features.

   Extended Discontinuous Reception (eDRX)
      A method to conserve the battery of an Internet of Things (IoT) device by allowing it to remain inactive for extended periods.

   External Memory Interface (EXMIF)
      A bus protocol for communication from an integrated circuit, such as a microprocessor, to an external memory device located on a circuit board.

   External Memory Interface Encryption Engine (EXMEE)
      A peripheral that supports on-the-fly encryption and authentication for the memory connected to EXMIF.
      The AES tweaked mode is used to provide encryption, and one of single hash, granular hash, or Merkle tree is used to provide authentication, using the SHA3 algorithm.

   Fast Lightweight Processor (FLPR, pronounced “Flipper”)
      A processor that is located in the high-speed portion of the Global Domain primarily intended to implement software-defined peripheral functions.

   Firmware Over-the-Air (FOTA) update
      A firmware update performed remotely over-the-air (OTA).

   Floating-Point Unit (FPU)
      A part of a CPU specially designed to perform operations on floating-point numbers.

   Fork
      A server-hosted downstream copy of an upstream :term:`repository <Repository>` that intends to follow the changes made in the original upstream repository as time goes by, while at the same time keeping some other changes unique to it.
      It can be hosted on GitHub or elsewhere.

   Forward Error Correction (FEC)
      A technique that adds redundant data to the original message, which is used to detect and correct errors that occur during transmission over a network improving the overall performance by reducing the number of errors and retransmissions.

   Frequency Division Duplex (FDD)
      A method used in wireless communication that uses different frequencies for uplink and downlink, which allows the user to transmit and receive simultaneously.

   Frequency-locked loop (FLL)
      An electronic control system that generates a signal that is locked to the frequency of an input or "reference" signal.

   Front-End Module (FEM)
     A device that amplifies the radio frequency (RF) signal, to increase the range distance, the strength, and the robustness of a link connection.
     A more robust link reduces packet loss, causing fewer retransmissions and increasing the probability of successfully receiving the first packet, resulting in a lower link latency.

     FEMs provide a :term:`Power Amplifier (PA)` that increases the TX power or a :term:`Low-Noise Amplifier (LNA)` that increases the RX sensitivity, or both.
     Some FEMs, like the nRF21540, also provide a power down (PDN) control that powers down the FEM internal circuits, to reduce energy consumption.

     For testing purposes, a FEM is usually integrated in either a development kit or a shield that you can connect to a development kit.

     See :ref:`ug_radio_fem` for more information about FEM support in the |NCS|.

   Fully Depleted Silicon-on-Insulator (FD-SOI)
      A type of SOI technology that uses a thin layer of silicon that is fully depleted of electrons.

   GitHub fork
      A `GitHub fork`_ is a copy of a repository inside GitHub, that allows the user to create a :term:`Pull Request`.

   General Packet Radio Services (GPRS)
      Packet-based mobile data service for 2G and 3G mobile networks with data rates of 56-114 kbps/second and continuous connection to the Internet.

   General-Purpose Input/Output (GPIO)
      A digital signal pin that can be used as input, output, or both.
      It is uncommitted and controllable by the user at runtime.

   General-Purpose Input/Output Tasks and Events (GPIOTE)
      A module that provides functionality for accessing GPIO pins using tasks and events.
      Each GPIOTE channel can be assigned to one pin.

   Generic Access Profile (GAP)
      A base profile that all Bluetooth devices implement.
      It defines the basic requirements of a Bluetooth device.
      See `Bluetooth Core Specification`_, Vol 1, Part A, Section 6.2.

   Generic Attribute Profile (GATT)
      "Generic Attribute Profile (GATT) is built on top of the Attribute Protocol (ATT) and establishes common operations and a framework for the data transported and stored by the Attribute Protocol."
      `Bluetooth Core Specification`_, Vol 1, Part A, Section 6.4.2.

   Global Navigation Satellite System (GNSS)
      A satellite navigation system with global coverage.
      The system provides signals from space transmitting positioning and timing data to GNSS receivers, which use this data to determine location.

   Global Positioning System (GPS)
      A satellite-based radio navigation system that provides its users with accurate location and time information over the globe.

   Hardware Flow Control (HWFC)
      A handshaking mechanism used to prevent an overflow of bytes in modems.
      It uses two dedicated pins on the RS-232 connector, :term:`Request to Send (RTS)` and :term:`Clear to Send (CTS)`.
      The :ref:`default serial port connection settings <test_and_optimize>` in the |NCS| use HWFC set to ``None``.

   Host Controller Interface (HCI)
      Standardized communication between the host stack (for example, a PC or mobile phone OS) and the controller (the Bluetooth IC).
      This standard allows the host stack or controller IC to be swapped with minimal adaptation.

   Human Interface Device (HID)
      Type of a computer device that interacts directly with, and most often takes input from, humans and may deliver output to humans.
      The term *HID* most commonly refers to the USB-HID specification.
      This standard allows the host stack or controller IC to be swapped with minimal adaptation.

   Image file
      An output file produced by the build process.
      The image file can refer to an *executable*, a *program*, or an *ELF file*.
      For the list of image files produced by the :ref:`build system <app_build_system>` of the |NCS|, refer to :ref:`app_build_output_files`.

   Integrated Circuit (IC)
      A semiconductor chip consisting of fabricated transistors, resistors, and capacitors.

   Integrated Circuit Card Identifier (ICCID)
      A unique serial number of a SIM card.

   Integrated Development Environment (IDE)
      A software application that provides facilities for software development.

   Inter-IC sound (I2S)
      A serial bus interface standard used for connecting digital audio devices for transmission of the pulse-code modulation (PCM) data.

   International Mobile (Station) Equipment Identity (IMEI)
      A unique code consisting of 14 digits and one check digit for identifying 3GPP-based mobile devices.

   Internet Control Message Protocol (ICMP)
      The control protocol of the IP stack that enables the establishment of reachability and routes.
      This protocol is an integral part of any IP but is unique as it is not a transport protocol to exchange data between hosts.

   Internet Protocol version 4 (IPv4)
      The fourth version in the development of the Internet Protocol (IP).
      It is the communications protocol that provides an identification and location system for computers on networks.
      It routes most traffic on the Internet.

   Internet Protocol version 6 (IPv6)
      The latest version of the Internet Protocol (IP).
      It is the communications protocol that provides an identification and location system for computers on networks and routes traffic across the Internet.

   Interprocessor Communication Transceiver (IPCT)
      A peripheral used for direct signalling between peripherals in other domains.

   IPv4 address
      A numerical label that is used to identify a network interface of a computer or other network node participating in an IPv4 computer network.

   IPv6 address
      An alphanumerical label that is used to identify a network interface of a computer or other network node participating in an IPv6 computer network.

   Isochronous channels (ISO)
      A feature of the :term:`LE Audio` standard that allows for relaying audio data to multiple devices at the same time (isochronously) without having to split the stereo stream.

   Just In Time Provisioning (JITP)
      A device is provisioned when it first tries to connect to the IoT broker and presents its device certificate.
      Before the first communication, the device is not known to the broker and is not stored in the fleet registry.

   Kconfig file
      A configuration file for a module or a sample, written in the :term:`Kconfig language` syntax.
      It defines build-time configuration options, also called symbols, namely application-specific values for one or more kernel configuration options.
      It also defines how they are grouped into menus and sub-menus, and dependencies between them that determine what configurations are valid.
      Kconfig files use the :file:`.conf` extension.

   Kconfig fragment
      A configuration file that sets the values of some :term:`Kconfig options <Kconfig option>`.
      This can be used to configure the software included in an application image and its behavior.
      Kconfig fragments can be used, for example, to determine whether the application has networking support, which device drivers to include, and the sizes of logging buffers.
      Kconfig fragments use the :file:`.conf` extension.

   Kconfig language
      A `configuration language <Kconfig language_>`_ used in Kconfig files and fragments.
      It was initially created for the Linux kernel.

   Kconfig option
      A configuration option defined in a :term:`Kconfig file` or set in a :term:`Kconfig fragment`.

   Kconfig project configuration
      A :term:`Kconfig fragment`, usually called :file:`prj.conf`, used to define default :term:`Kconfig options <Kconfig option>` for an application.
      These are foundational options for the application that will always be applied to its built image.
      However, they can be overridden by applying an additional :term:`Kconfig fragment` at build time.

   LC3 codec
      The Low Complexity Communication Codec, or LC3 codec, is the new codec for the :term:`LE Audio` standard.
      It replaces the dated :term:`SBC codec` that is used in the Bluetooth Classic Audio streaming.
      The LC3 codec uses half the data rate and delivers higher audio quality than the SBC codec.

   LE Audio
      Audio transmission standard based on Bluetooth® LE.
      It is independent from Bluetooth® 5.0 and Bluetooth® 5.1.
      Audio LE reduces power consumption for audio transmission, allows for isochronous audio streams between a source and multiple sink devices, and enables broadcasting to an unlimited number of audio devices.
      The standard uses the new :term:`LC3 codec`.

   Link Layer (LL)
      "A control protocol for the link and physical layers that is carried over logical links in addition to user data."
      `Bluetooth Core Specification`_, Vol 1, Part A, Section 1.2.
      It is implemented in the Bluetooth LE Controller layer.

   Logical Link Control and Adaptation Protocol (L2CAP)
      A protocol used within the Bluetooth protocol stack.
      "[It] provides a channel-based abstraction to applications and services.
      It carries out segmentation and reassembly of application data and multiplexing and de-multiplexing of multiple channels over a shared logical link."
      `Bluetooth Core Specification`_, Vol 1, Part A, Section 1.1.

   Low-density parity-check (LDPC)
      A class of error correcting codes that may be employed for providing error correction of transmission errors in communication systems.

   Low Latency Packet Mode (LLPM)
      A mode that allows shorter connection intervals than specified in the `Bluetooth Core Specification`_.

   Low-Noise Amplifier (LNA)
      In a radio receiving system, an electronic amplifier that amplifies a very low-power signal without significantly degrading its signal-to-noise ratio.

   LTE-M
      An open standard that is most suitable for medium-throughput applications requiring low power, low latency, and/or mobility, like asset tracking, wearables, medical, Point of Sale (POS), and home security applications.
      Also known as Cat-M1.

   Lightweight Machine to Machine (LwM2M)
      An application layer protocol.
      It defines the service architecture for IoT devices and the protocol for device management.

   Man-in-the-Middle (MITM)
      A man-in-the-middle attack is a form of eavesdropping where communication between two devices is monitored and modified by an unauthorized party who relays information between the two devices giving the illusion that they are directly connected.

   Mass Storage Device (MSD)
      Any storage device that makes it possible to store and port large amounts of data in a permanent and machine-readable fashion.

   Matter controller
      A role of a Matter node meant to initiate communication and control other nodes in a Matter network.

   Matter device
      In :ref:`ug_matter`, a physical equipment with appropriate firmware that allows to create a single or several Matter *network nodes*.
      A Matter device can operate in an IPv6 network, such as :ref:`ug_thread`.
      Also referred to as *Matter accessory device*.

   Maximum Transmission Unit (MTU)
      The largest packet or frame that can be sent in a single network-layer transaction.

   MCUboot
      A secure bootloader for 32-bit microcontroller units, which is independent of hardware and operating system.

   MCUmgr
      A management library for 32-bit MCUs.
      It uses the :term:`Simple Management Protocol (SMP)`.

   Media Access Control address (MAC address)
      The unique 48-bit serial number in the network circuitry of every Ethernet and Wi-Fi device.

   Medium Access Control layer (MAC)
      The MAC layer sits above the :term:`Physical layer (PHY)` in a protocol stack.
      It is responsible for managing access to the shared physical medium and ensuring orderly communication between devices.

   Memory Privilege Controller (MPC)
      Performs security configuration, enforcement, and bus decoding.
      It implements security filtering, checking bus accesses against the configured access properties and blocking any unauthorized accesses.

   Memory-to-memory Vector Direct Memory Access (MVDMA)
      A peripheral capable of copying data from one memory address to another memory address.
      It is not a complement to the EasyDMA (:term:`Easy Direct Memory Access (EasyDMA)`).
      The scatter-gather property applies to MVDMA as well.

   Memory Watch Unit (MWU)
      A peripheral that can be used to generate events when a memory region is accessed by the CPU.

   Message Queue Telemetry Transport (MQTT)
      A machine-to-machine (M2M) connectivity protocol used by some IoT devices.
      It is designed as an extremely lightweight publish/subscribe messaging transport.
      It is useful for connections with remote locations where a small code footprint is required and/or network bandwidth is at a premium.
      For example, it has been used in sensors communicating to a broker through a satellite link, over occasional dial-up connections with healthcare providers, and in a range of home automation and small device scenarios.

   Microcontroller Unit (MCU)
      A small computer on an integrated circuit.

   Menuconfig
      A tool to view and edit Kconfig settings.
      It was initially created for the Linux kernel.
      It uses the Kconfig configuration language.

   Modulation Coding Scheme (MCS)
      An index defined by the Wi-Fi standards where each index specifies a combination of modulation scheme and forward error correction coding rate.

   Monitor
      A network interface mode for nRF70 Series devices that enables the capture and analysis of all incoming IEEE 802.11 packets.

   Multicast addressing
      An addressing type that uses a one-to-many association, where datagrams are routed from a single sender to multiple selected endpoints simultaneously in a single transmission.

   Multiple-input and multiple-output (MIMO)
      A method for multiplying the capacity of a radio link using multiple transmission and receiving antennas to exploit multipath propagation.

   Narrowband Internet of Things (NB-IoT)
      A narrowband technology standard with longer range, lower throughput, and better penetration in, for example, cellars and parking garages compared to LTE-M.
      NB-IoT is most suitable for static, low throughput applications like smart metering, smart agriculture, and smart city applications.
      Also known as Cat-NB1.

   Near Field Communication (NFC)
      A standards-based short-range wireless connectivity technology that enables two electronic devices to establish communication by bringing them close to each other.

   Network Co-Processor (NCP)
      A co-processor offloading network functions from the host processor.
      In the |NCS| context, it is typically used in :term:`OpenThread` and Zigbee platform designs.

   Network node
      An element of a mesh network that has a unique network address, a role, and a type.
      Such nodes are proper of :ref:`Thread <ug_thread>` or :ref:`Bluetooth Mesh <ug_bt_mesh>` networks.

      In the context of :ref:`Matter <ug_matter>` or :ref:`Zigbee <ug_zigbee>` networks, a network node also has a unique ID and operational credentials.
      After being commissioned into the respective network, it can be controlled remotely using *clusters*.

   Network Time Protocol (NTP)
      A networking protocol for clock synchronization between computer systems over packet-switched, variable-latency data networks.

   NFC-A Listen Mode
      The initial mode of an NFC Forum Device when it does not generate a carrier.
      The device listens for the remote field of another device.
      See :term:`Near Field Communication (NFC)`.

   Noise Factor (NF)
      The relation of the :term:`Signal-to-Noise Ratio (SNR)` in the device input to the SNR in the device output.

   Non-Secure Processing Environment (NSPE)
      One of the two processing environments when using Cortex-M Security Extensions.
      When firmware is separated between NSPE and :term:`Secure Processing Environment (SPE)`, NSPE is used to store the application core firmware.
      See :ref:`app_boards_spe_nspe` for more information.

   Non-volatile Memory (NVM)
      A type of memory that can retrieve stored information even after having been power-cycled.

   Non-volatile Memory Controller (NVMC)
      A controller used for writing and erasing the internal flash memory and the :term:`User Information Configuration Registers (UICR)`.

   nRF Cloud
      Nordic Semiconductor's platform for connecting IoT devices to the cloud, viewing and analyzing device message data, prototyping ideas that use Nordic Semiconductor chips, and more.
      It includes a public REST API that can be used for building IoT solutions.
      See `nRF Cloud`_.

   nRF Connect SDK Add-ons
      An index of publicly available supplementary components that extend the |NCS|'s functionality.
      The index can be accessed from the |nRFVSC|, and can also be browsed on `add-on webpage <nRF Connect SDK Add-ons_>`_.
      Add-ons in the index follow specific contribution guidelines and are maintained by their respective owners.
      The workspace applications listed there can be used to create out-of-tree :ref:`workspace applications <creating_add_on_index>`.
      For more information, including how to contribute your own add-on to the index, read :file:`README.md` and :file:`CONTRIBUTING.md` in the `ncs-app-index repository <ncs-app-index_>`_.

   nRF repository
      An |NCS| repository, hosted in the `nrfconnect GitHub organization`_, that does not have an externally maintained, open-source upstream.
      It is exclusive to Nordic development.

   nRF Secure Immutable Bootloader (NSIB)
      A bootloader created and maintained by Nordic Semiconductor that is built on Chain of Trust architecture.

   OpenAMP
      A framework that provides software components that enable the development of software applications for Asymmetric Multiprocessing (AMP) systems.
      See `OpenAMP`_.

   OpenThread
      A portable and flexible `open-source implementation <OpenThread.io_>`_ of the Thread networking protocol.

   OpenThread Border Router (OTBR)
      A router that connects a Thread network to other IP-based networks, like Wi-Fi or Ethernet.
      A Thread network requires a Border Router to connect to other networks.

   Operating System (OS)
      A set of functions and data structures that manages system resources, hardware components, and the execution of programs and processes.
      It is usually composed of a kernel, a scheduler, a file system, a memory manager, and other components.

   Operational Amplifier (op-amp)
      A high-gain voltage amplifier that has a differential input and, usually, a single output.

   Orthogonal Frequency Division Multiplexing (OFDM)
      A type of digital transmission and a method of encoding digital data on multiple carrier frequencies.

   Orthogonal Frequency Division Multiple Access (OFDMA)
      A multiple access mechanism for shared medium networks based on Orthogonal Frequency Division Multiplexing (OFDM) achieved by assigning subsets of channel sub-carriers to individual users.
      This allows simultaneous on-air frame transmissions to or from multiple users.

   OSS repository
      An |NCS| repository, hosted in the `nrfconnect GitHub organization`_, that tracks an upstream Open Source Software counterpart that is externally maintained.

   Out-of-Band (OOB)
      A communication channel that is outside of the defined activity.
      For example, in Bluetooth® Low Energy, Out-of-Band pairing can be used to share encryption keys or authentication data using a different communication channel (such as NFC).

   Over-the-Air (OTA)
      Any type of wireless transmission.

   Packet Traffic Arbitration (PTA)
      A collaborative coexistence mechanism for colocated wireless protocols.

   Packet Error Rate (PER)
      The number of incorrectly received data packets divided by the total number of received packets.

   Password-Authenticated Session Establishment (PASE)
      A method of establishing a secure session between two network nodes, using a pre-shared secret.

   Patch
      A method to describe changes in one or more source code files.
      It does not require a repository.
      Sometimes it is improperly used as a synonym of :term:`commit <Commit>`.

   Peripheral CPU Device Firmware Update (PCD)
      A library that adds functionality for transferring DFU images from the application core to the network core on the nRF5340 SoC.

   Peripheral Processor (PPR, pronounced “Pepper”)
      A processor that is located in the low-leakage portion of the Global Domain and is primarily intended to:

         * Handle peripherals in low-power states while the main processors are in sleep mode.
         * Coordinate peripherals.
         * Implement low-level protocols for communicating with sensors and actuators

   Personal Unblocking Key (PUK)
      A key used to reset a PIN that has been lost or forgotten for a SIM card.

   Physical layer (PHY)
      The PHY layer resides at the bottom of a protocol stack.
      It is responsible for the physical transmission and reception of data bits across the physical medium (for example, cables, radio waves).

   Physically Unclonable Function (PUF)
      A function device that exploits inherent randomness introduced during manufacturing to give a physical entity a unique "fingerprint" or a trust anchor.

   Platform Security Architecture Certified (PSA Certified)
      A security certification scheme for Internet of Things (IoT) hardware, software and devices.

   Power Amplifier (PA)
      A device used to increase the transmit power level of a radio signal.

   Power Management Integrated Circuit (PMIC)
      A chip used for various functions related to power management.

   Power Management Service
      A service that automatically handles the settings described by an application.
      It decides how registers will be retained, which parts of the device are put into what mode, and what clock signals are running.

   Power Saving Mode (PSM)
      A feature introduced in 3GPP Release 12 to improve the battery life of IoT (Internet of Things) devices by minimizing energy consumption.
      The device stays dormant during the PSM window.

   Preconnect provisioning
      The process of securely generating and storing credentials in a device, then uploading a device ID and device certificate to a cloud account so that the device is ready to connect to the cloud.

   Predicted GPS (P-GPS)
      A form of assistance provided to devices trying to obtain a :term:`Global Navigation Satellite System (GNSS)` fix, where the device can download up to two weeks of predicted satellite Ephemerides data.
      It enables devices to determine the exact orbital location of the satellite without connecting to the network every two hours with a trade-off of reduced accuracy of the calculated position over time.
      It is available through :term:`nRF Cloud`.

   Preview Development Kit (PDK)
      A development platform used for application development.
      A Preview Development Kit uses an engineering sample of the chip and it is not production-ready in comparison to the Development Kit that uses a production-ready version of the chip.

   Printed Circuit Board (PCB)
      A board that connects electronic components.

   Programmable Peripheral Interconnect (PPI)
      It enables peripherals to interact autonomously with each other using tasks and events independently of the CPU.

   Protocol Data Unit (PDU)
      Information transferred as a single unit between peer entities of a computer network and containing control and address information or data.
      PDU mode is one of the two ways of sending and receiving SMS messages.

   Provisioning
      * In a Thread Mesh network, the process of associating a device to the appropriate service, and performing any application or vendor-specific configuration.
        It is a step in the commissioning process.
      * In a Bluetooth Mesh network, the process of adding devices to the network.
      * In a bootloader, the process of storing public key hashes in a separate region of memory from the bootloader image.
      * In a device-to-cloud connection, the process of storing a device ID and device certificate to a cloud account.

   Pull Request
      A set of :term:`commits <Commit>` that are sent as a :term:`contribution <Contribution>` to a Git :term:`repository <Repository>`.

   Quad Serial Peripheral Interface (QSPI)
      A peripheral that provides support for communicating with an external flash memory device using SPI.

   Qualified Design Identification (QDID)
      A unique identifier assigned to a design that has completed the Bluetooth Qualification Process.

   Quality of Service (QoS)
      The measured overall performance of a service, such as a network, a connection, or a cloud computing service.

   Radio Co-Processor (RCP)
      A co-processor offloading radio functions from the host processor.
      In the |NCS| context, it is typically used in :term:`OpenThread` and Zigbee platform designs.

   Real-time operating system (RTOS)
      An operating system that reacts to input within a specific period of time.
      A real-time deadline can be so small that system reaction appears instantaneous.

   Real-Time Transfer (RTT)
      Proprietary technology for bidirectional communication that supports J-Link devices and Arm-based microcontrollers, developed by SEGGER Microcontroller.

   Receive Data (RXD)
      A signal line in a serial interface that receives data from another device.

   Received Signal Strength Indication (RSSI)
      An indication of the power of a received radio signal.

   Release Assistance Indication (RAI)
      Release assistance indication (RAI) for access stratum (AS) is a 3GPP Release 14 feature that allows the LTE-M/NB-IoT UE to trigger a buffer status report (BSR) with zero-byte size to indicate to the eNB that it has no more uplink data, and that the UE does not anticipate receiving further downlink data.

   Remote Procedure Call (RPC)
      A form of inter-process communication that allows for calling a function on remote processors from a local processor, both synchronously and asynchronously.

   Repository
      The entire set of files and folders of which a project is composed, together with the revision history of each file.
      It is often composed of multiple branches.
      It is also known as *Git repository* or *Git project*, and is similar to a :term:`Submodule <Submodule>` of Git.

   Request to Send (RTS)
      In :term:`flow control <Hardware Flow Control (HWFC)>`, the transmitting end is ready and requesting the far end for permission to transfer data.

   Revision
      A tracked state in time of a Git repository.
      It can always be represented by a Git SHA, but can also be a Git tag.
      For more information, see :ref:`dm-revisions` and `Git revisions`_.

   Root of Trust (RoT)
      A concept related to `Platform Security Architecture (PSA)`_.
      The property or component in a secure system that provides the foundation of a :term:`Chain of Trust`.
      You can read more about this concept in the |NCS| in the :ref:`bootloader documentation <ug_bootloader_chain_of_trust>`.
      See also `What is a Root of Trust?`_ on the PSA Certified website.

   Sample
      An implementation example that showcases a single feature or library.
      It is possible to create a programmable image from it, as it includes a ``main()`` entry point.

   SBC codec
      The Low Complexity Subband Codec (SBC) is the default software codec for the Bluetooth Classic Audio.
      It comes with digital encoder and decoder for transferring audio data.
      It is being gradually supplanted by the :term:`LC3 codec` developed for :term:`LE Audio`.

   Scheduled downloads
      A mechanism to maintain GNSS navigation data availability in periodic navigation mode.

      If GNSS only runs long enough to calculate the first usable fix, it is probably never able to download for example almanacs or ionospheric correction data from the satellite broadcast.
      To ensure GNSS data availability and to improve accuracy in periodic navigation mode, GNSS performs scheduled downloads.
      When GNSS determines it needs to download ephemerides or almanacs from the broadcast, the fix interval and fix retry parameters are temporarily ignored and GNSS runs continuously for a longer period of time.
      GNSS performs scheduled downloads until it has downloaded the data it needs.
      After the downloads, normal operation is resumed.
      When `A-GNSS`_ is used, scheduled downloads are not necessary and you can disable them using the :ref:`nrfxlib:nrf_modem_gnss_api`.
      Scheduled downloads are only performed in periodic navigation mode.

   Secure access port protection mechanism (Secure AP-Protect)
      A mechanism used to prevent read and write access to all secure CPU registers and secure memory-mapped addresses.
      In the |NCS|, it uses ``SECUREAPPROTECT`` registers and several Kconfig options, as described in :ref:`app_approtect`.
      See also :term:`Access port protection mechanism (AP-Protect)`.

   Secure domain (SecDom)
      A dedicated :term:`Domain` which executes a pre-compiled firmware component that is signed by Nordic Semiconductor.
      It exposes security services to the other domains through an Interprocess Communication interface.

   Serial Peripheral Interface (SPI)
      An interface bus commonly used to send data between microcontrollers and small peripherals such as shift registers, sensors, and SD cards.

   Serial Peripheral Interface Master (SPIM)
      A peripheral that can communicate with multiple slaves using individual chip select signals for each of the slave devices attached to a bus.

   Serial Peripheral Interface Slave (SPIS)
      A peripheral used for ultra-low power serial communication from an external SPI master.

   Secure Processing Environment (SPE)
      One of the two processing environments when using Cortex-M Security Extensions.
      When firmware is separated between :term:`Non-Secure Processing Environment (NSPE)` and SPE, SPE is used to store security features.
      See :ref:`app_boards_spe_nspe` for more information.

   Security Manager Protocol (SMP)
      A protocol used for pairing and key distribution.

   Serial Wire Debug (SWD)
      A standard two-wire interface for programming and debugging Arm CPUs.

   Service Set Identifier (SSID)
      A sequence of characters that uniquely names a wireless local area network (WLAN).
      Sometimes referred to as a network name.
      This name allows stations to connect to the desired network when multiple independent networks operate in the same physical area.

   Shield
      A hardware add-on that you can attach to the development kit to extend its feature and functionalities.
      See :ref:`shield_names_nrf`.

   Signal-to-Noise Ratio (SNR)
      The level of signal power compared to the level of noise power, often expressed in decibels (dB).

   Simple Management Protocol (SMP)
      A transport protocol used by :term:`MCUmgr`.

   Simple Network Time Protocol (SNTP)
      A less complex implementation of :term:`Network Time Protocol (NTP)`, using the same protocol but without requiring the storage of state over extended periods of time.

   Software-enabled Access Point (SoftAP or SAP)
      A network device operating as an IEEE 802.11 access point using software with limited functionality.

   Soft fork
      A :term:`fork <Fork>` that contains a very small set of changes when compared to its upstream.

   SoftDevice
      A wireless protocol stack that complements the nRF5 Series SoCs.
      Nordic Semiconductor provides these stacks as qualified, precompiled binary files.

   Software Development Kit (SDK)
      A set of tools used for developing applications for a specific device or operating system.

   Spectral Emission Mask (SEM)
      A spectrum mask where the spectrum emissions should not be higher at any frequency offset than the values specified in the mask.

   Spin-Transfer Torque Magneto-Resistive Random Access Memory (MRAM (STT-MRAM))
      An alternative :term:`Non-volatile memory (NVM)` to flash memory.
      Compared to flash, MRAM does not have to be erased before writing and can simply be written, making it easier to use.

   Spinel
      A general management protocol for enabling a host device to communicate with and manage co-processors, like a network co-processor (NCP) or a radio co-processor (RCP).

   Station mode (STA)
      Device operating as an IEEE 802.11 station.

   Submodule
      A child of another Git :term:`repository <Repository>`, managed using the ``git submodule`` command family.
      Also referred to as *Git submodule*.

   Supervisor Call (SVC)
      It generates a software exception in which access to system resources or privileged operations can be provided.

   System Controller
      A :term:`VPR Core` that implements system startup and power management functionalities that in the past would have been implemented in hardware.

   System in Package (SiP)
      Several integrated circuits, often from different technologies, enclosed in a single module that performs as a system or subsystem.

   System on Chip (SoC)
      A microchip that integrates all the necessary electronic circuits and components of a computer or other electronic systems on a single integrated circuit.

   System Protection Unit (SPU)
      The central point in the system that controls access to memories, peripherals, and other resources.
      It is a peripheral used only by Nordic Semiconductor.

   Target
      The goal of an operation, for example, programming a specific image on a device, compiling a specific set of files, or removing previously generated files.

   Target Wake Time (TWT)
      A function that allows an access point to define a specific time or set of times for individual devices to access the wireless network.
      It is the mechanism that allows devices to negotiate when and how often they turn on and off, based on when they need to send and receive data.

   Tightly Coupled Memory (TCM)
      Part of RAM which provides a low-latency memory access that the core can use with predictable access time.
      Unlike cached memories for which the access latency is unpredictable.

   Temporal Key Integrity Protocol (TKIP)
      A security protocol used in the IEEE 802.11 wireless networking standard.

   Time Division Duplex (TDD)
     A method used in wireless communication that uses same frequencies for uplink and downlink, but in a different timeslots.

   Time to First Fix (TTFF)
      The time needed by a :term:`Global Navigation Satellite System (GNSS)` module to estimate its position.

   TIMER
      A peripheral that runs on the high-frequency clock source (HFCLK) and includes a four-bit (1/2X) prescaler that can divide the timer input clock from the HFCLK controller.
      It can operate in two modes: timer and counter.

   Toolchain
      A set of development tools: compiler, assembler, and linker.
      The Zephyr SDK includes this set plus a couple more Zephyr-specific tools.
      The |NCS| toolchain is based on the Zephyr SDK and then adds on top of it a :ref:`set of tools and modules specific to the nRF Connect SDK <requirements>` that are required to build |NCS| samples and applications.

   Traffic Indication Map (TIM)
      A field in the Wi-Fi access point's beacon frame containing information about which Wi-Fi stations have buffered data waiting for them.
      This allows devices in power save mode to remain in a low-power state until they have data waiting for them.

   Transmission Control Protocol (TCP)
      A connection-oriented protocol that provides reliable transport.
      This reliability comes at the cost of control packets overhead of the protocol itself, making it unsuitable for bandwidth-constrained applications.

   Transmit Data (TXD)
      A signal line in a serial interface that transmits data to another device.

   Trusted Third Party (TTP)
      An entity which facilitates interactions between two parties who both trust the third party.

   TrustZone
      Provides a cost-effective methodology to isolate security-critical components in an ARM Cortex CPU by hardware separating a rich operating system from smaller, secure operating system.

   Two-wire Interface (TWI)
      An I\ :sup:`2`\ C compatible serial communication protocol that enables devices to exchange data by using a two-wire bus system, allowing multiple devices to be connected and controlled by a master device.

   UART Hardware Flow Control (UART HWFC)
      A handshaking mechanism used to prevent a buffer overflow in the receiver (in embedded computing use cases).
      In a serial connection, when the transmission baud rate is high enough for data to appear faster than it can be processed by the receiver, the communicating devices can synchronize with each other, using :term:`Request to Send (RTS)` and :term:`Clear to Send (CTS)` pins.
      In the |NCS|, UART HWFC is usually not used when :ref:`testing applications <test_and_optimize>`.

   Unicast addressing
      An addressing type that uses a one-to-one association between the destination address and the network endpoint.
      Each destination address uniquely identifies a single receiver endpoint.

   Universal Asynchronous Receiver/Transmitter (UART)
      A hardware device for asynchronous serial communication between devices.

   Universal Serial Bus (USB)
      An industry standard that establishes specifications for cables and connectors and protocols for connection, communication, and power supply between computers, peripheral devices, and other computers.

   Uplink (UL)
     A signal sent from the :term:`User equipment (UE)` to the :term:`Evolved Node B (eNB)`.

   Upmerge
      In the |NCS|, the act of updating (synchronizing) a downstream :term:`repository <Repository>` with a newer revision of its :term:`upstream <Upstream repository>` OSS repository.

   Upstream repository
      A :term:`repository <Repository>` located upstream, relative to another repository, in the flow of information.
      See :ref:`dm_repo_types`.

   User Datagram Protocol (UDP)
      One of the core IP protocols.
      UDP with its connectionless model, no handshaking dialogues makes it a suitable transport for systems with constrained bandwidth like Bluetooth low energy.

   User equipment (UE)
      Any device used directly by an end-user to communicate.
      It can be a hand-held telephone, a laptop computer equipped with a mobile broadband adapter, or any other device.

   User Information Configuration Registers (UICR)
      Non-volatile memory registers used to configure user-specific settings.

   Version
      A string that identifies a project release.

   VPR Core
      Pronounced "Viper Core," a :term:`Core` that is compatible with the RISC-V instruction set, meaning the industry-standard RISC-V development tools can be used.
      VPR implements the RV32E instruction set (Base Integer Instruction Set (embedded) - 32 bit, 16 registers) and the following extensions:

         * M: Multiply and divide extension
         * C: Compressed extension (compressed instructions)

      The nRF54H20 DK uses several VPR cores: :term:`Fast Lightweight Processor (FLPR, pronounced “Flipper”)`, :term:`Peripheral Processor (PPR, pronounced “Pepper”)` and :term:`System Controller`.

   VPR Event Interface (VEVIF)
      A real-time peripheral that allows interaction with the VPR's interrupts and the PPI system in the domain where the VPR is instantiated.

   Watchdog timer (WDT)
      A timer that causes a system reset if it is not poked periodically.

   West
      A command-line tool providing a management system for multiple :term:`repositories <Repository>`, used by Zephyr and the |NCS|.
      It is expandable, as you can write your own extension commands to add additional features.
      See :ref:`zephyr:west`.

   West manifest file
      The main file describing the contents of a :term:`west <West>` workspace, which is located in the :term:`west manifest repository <West manifest repository>`.
      In the |NCS| and Zephyr, it is named :file:`west.yml`.

   West manifest repository
      A :term:`repository <Repository>` that contains a :term:`west manifest file <West manifest file>` and can be used to configure a west workspace.
      See :ref:`dm_repo_types`.

   West project
      Any of the listed :term:`repositories <Repository>` inside a :term:`west manifest file <West manifest file>`.

   Wi-Fi Protected Access® (WPA)
      A security protocol developed by Wi-Fi Alliance.
      It comes in three flavours WPA, WPA2 and WPA3 respectively, with each offering higher security compared to its predecessor.

   Wireshark
      A free software tool that captures wireless traffic and reproduces it in a readable format.
      It is a cross-platform network protocol analyzer that can be used to view, analyze, and troubleshoot packets sent over a data network.
