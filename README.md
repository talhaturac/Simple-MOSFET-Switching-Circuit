# Creating a Switching (Triggering) Circuit Using MOSFET

In this study, an attempt has been made to design a simple but effective MOSFET switchingcircuit that can be used to trigger electromagnetic launchers. MOSFET is a semiconductor component often used for power switching due to their high efficiency and fast switching characteristics. The main goal of this study is to design a switching circuit that will be used to trigger an electromagnetic launcher in the future. However, the successful triggering will be controlled by the LED and not by the coils.  So we can actually approach the work as a general triggering circuit with MOSFETs.

                     ![full-color](https://user-images.githubusercontent.com/123409659/233755585-e4e0738a-fb1e-4cb6-b2eb-a114ae81c62a.gif)

## Methodology

MOSFET (Metal Oxide Semiconductor Field Effect Transistor) is a widely used component in high performance semiconductor switching. In this paper, the use of MOSFET in switching and its advantages over other semiconductor elements will be discussed and a simple MOSFET switching circuit will be explained.MOSFET is a type of transistor and is used in high-speed switching applications. In particular, it is used in applications such as power supplies, power inverters, DC-DC converters and motor drives. MOSFET is advantageous due to its low input capacitance, high efficiency, fast switchings and small size.In a MOSFET, a thin insulating layer formed over the semiconductors is connected to the gate electrode. The voltage applied to this gate electrode changes the electric field in the insulator layer. Thus, the electrical conductivity in the channel region of the MOSFET is controlled. The MOSFET consumes a very small amount of power due to its high input impedance.

The advantages of MOSFET over other semiconductor elements in switching are as follows:

    •   Low Input Capacitance  : The input capacitance of the MOSFET is lower than that of other semiconductor switchers. This allows the MOSFET to switch quickly and enables higher switching frequencies.
    •   High Efficiency        : The internal resistance of the MOSFET is low, which reduces energy loss. Therefore, MOSFET-based switching circuits have higher efficiency.
    •   High Switching Speed   : MOSFET can be switched faster compared to other semiconductor switchers. Therefore, MOSFET-based switching circuits can operate at higher switching frequencies.
    •   Small Size             : MOSFET is smaller in size compared to other semiconductor switchers. This allows for denser circuit designs.

Since MOSFET has a wide range of applications, many researchers are working to improve the design and performance of MOSFET-based switching circuits. In DC/DC converters, MOSFETs are preferred over other semiconductor switches in high switching frequency applications. MOSFETs offer several advantages compared to other semiconductor switches in high switching frequency applications. First of all, the most important reason for using MOSFETs in high-switching frequency applications is that they have less power dissipation at high switching frequencies than at low switching frequencies. Therefore, MOSFETs stand out as a more efficient option in high frequency applications.
In addition, MOSFETs have the advantage of higher power density than other semiconductor switching devices. By operating at a higher power density, MOSFETs can switch at higher current and voltage levels.
In addition, MOSFETs can be driven more easily and to a lesser extent compared to other semiconductor switches. MOSFETs can be easily switched if the signals in the drive circuit are at high or low levels.
As a result, MOSFETs are more efficient, have higher power density and are easier to drive compared to other semiconductor switches in high switching frequency applications. For these reasons, they are widely used in DC/DC converters, power electronics applications, high speed switching, power amplifiers and many other applications.

```
 Circuit Elements: 

    - ARDUINO MEGA ( Microcontroller)

    - IRFZ44N (MOSFET)

    - PC817 (Optocoupler)

    - LM7812 & LM7805 (Linear Voltage Regulator)

    - 330R & 10kR (Resistance)

    - 0.1uF & 0.22uF &10uF & 100uF (Capacitor)

    - LED
```

While creating the circuit in this study, the datasheets of all components were examined one by one. Connection pins, current and voltage values were taken into consideration and a design was made accordingly. Without mentioning the datasheet information or technical details in the application, general information about the materials is mentioned below. Those who want to look at the details can access the datasheets free of charge from the internet, but if you have any questions or suggestions, you can contact me through the communication channels I left at the end.

IRFZ44N is an N-channel power MOSFET transistor. This transistor is a popular choice used in high current and low frequency switching. IRFZ44N is characterized by high conductivity, low resistance and fast switching characteristics. The IRFZ44N comes in a TO-220 package and typically has a maximum current carrying capacity of 55V and 49A. Furthermore, thanks to its low input capacitance, this component can also be used in fast switching applications.

Arduino Mega is an enhanced microcontroller board of the Arduino platform. It offers more input/output (I/O) ports and more memory capacity. The Mega includes 54 digital input/output pins (14 of which can be used as PWM outputs), 16 analog inputs, 4 UART (serial communication) connections, 4 external interrupt pins and more. These features make Arduino Mega ideal for more complex projects and applications that require more input/output connections. Arduino Mega has a wide range of applications. It is especially used in applications such as robotics, automatic control, sensor networks and data loggers. However, in one project it was used only for digital triggering. Mega's features and wide usage area allow projects to be made more advanced and comprehensive. However, in this study, it was used only for digital triggering.
The PC817 is an optical isolator and is used to isolate the input signal. It provides a secure connection between low power devices and high power devices and can also be used in high speed data transmission applications.

The LM7812 and LM7805 are linear voltage regulators with different voltage outputs used in electronic devices. The LM7812 provides 12 volt output and is used in applications that require a 12 volt power supply such as radio transmitters, amplifiers, etc., while the LM7805 provides 5 volt output and is preferred for applications that require a 5 volt power supply such as digital circuits, LED lighting, smart home devices, etc. Both voltage regulators are used to reduce the input voltage to a constant output voltage and are important for electronic devices that operate correctly and safely. With a wide range of applications, the LM7812 and LM7805 are frequently used components in electronic projects.

In the switching circuit, an LED is used to see when the switch is on or off. The LED lights up when the switch is on and remains off when the switch is off. This makes it possible to visually monitor the state of the circuit.
To prevent high current draw, resistors are used to limit the current flowing through the transistor (e.g. MOSFET) used in switching. This prevents overheating and damage to the transistor. It also prevents the high current from damaging other components. The values of the resistors are chosen depending on the requirements of the circuit and the characteristics of the transistor used. In the study, 2 different LEDs were triggered sequentially with the same microprocessor. In other words, the circuit in the given real application is formed by building 2 of the circuit whose theoretical study is given. 
Electromagnetic launchers are very exciting devices and are shown as the technology of the future. These devices use the magnetic field to launch objects at high speeds. If you want to make your own electromagnetic launcher, you can easily make this device using a MOSFET switching circuit. This is the main element of the work done. I plan to develop and implement this circuit I shared as an electromagnetic launcher circuit for [my TÜBİTAK 2209-A project](https://avesis.gazi.edu.tr/proje/20d9999a-d650-4a7e-954e-a980c7607a4e/lidar-ve-yapay-zeka-tabanli-dusman-tespitiyle-manyetik-firlaticinin-hedeflendirilmesi) in the future.

## Contact and Feedback

* [![GITHUB][github.com]][github-url]

* [![LinkedIn][LinkedIn.com]][LinkedIn-url]

* If you have any feedback, please contact me at tturac.turk@gazi.edu.tr e-mail address.
  
[github.com]: https://img.shields.io/badge/GITHUB_PROFILE-181717?style=for-the-badge&logo=github&logoColor=white
[github-url]: https://github.com/talhaturac
[LinkedIn.com]: https://img.shields.io/badge/LINKEDIN_PROFILE-0A66C2?style=for-the-badge&logo=LinkedIn&logoColor=white
[LinkedIn-url]: https://github.com/talhaturac

## References

    [1] 	Chen, Y., & Liu, Q. (2017). Design and implementation of high frequency full-bridge DC/DC converter based on MOSFET. Journal of Physics: Conference Series, 927(1), 012074.

    [2] 	Hua, M., Wang, Z., Shen, Z., & Zhang, Y. (2017). Zero-current-switching full-bridge PWM converter with MOSFET synchronous rectifier. IEEE Transactions on Power Electronics, 33(5), 4145-4155.

    [3] 	Liu, J., & Wang, L. (2019). A new three-phase soft-switching DC/DC converter using MOSFET and synchronous rectifier. Journal of Power Electronics, 19(4), 1064-1074.

    [4] 	Mazumder, S. K., & Pal, A. K. (2018). Dynamic model and control of a single phase MOSFET inverter for renewable energy application. International Journal of Electrical Power & Energy Systems, 98, 437-449.

    [5] 	Razavi, B. (2016). Fundamentals of microelectronics. Wiley.

    [6] 	Sedra, A. S., & Smith, K. C. (2016). Microelectronic circuits: theory and applications. Oxford University Press.

    [7]     Streetman, B. G., & Banerjee, S. K. (2015). Solid state electronic devices. Pearson.

    [8] 	Zhang, C., Zou, L., Jiao, L., & Zhang, X. (2021). A MOSFET-based DC-DC converter with an ultra-low input voltage. Journal of Power Electronics, 21(1), 198-206.
