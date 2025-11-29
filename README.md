Smart Parking Barrier System 

    Ahmet Emre BİLGE    : ahmetemre.bilge@agu.edu.tr                                       
    Fatih  Mehmet Ayhan : fatihmehmet.ayhan@agu.edu.tr                               
    Enes Erdoğan        : enes.erdogan@agu.edu.tr
Students , Department of EEE                          
   Abdullah Gül University                                   
    Kayseri, Turkey                                 
 
19.10.2025 
Proposal 
 
Introduction 

In recent years,, the demand for electric vehicles (EVs) has been 
increasing at a highly rapid pace, causing a new challenge for charging stations. 
The majority of parking spots are occupied by non-electric vehicles (petrol, 
diesel) and are idle for hours, hence losing their efficiency in charging. The aim 
of this project is to develop a Smart Parking Barrier System, which accepts only 
approved cars.The system is based on an STM32 microcontroller and includes 
functions such as RFID authorisation, ultrasonic obstacle detection, automatic 
barrier control, remote operation via ESP32-based ESP-NOW and status display 
via an OLED screen. Thanks to these features, the system can securely and 
automatically control access to parking areas. The project supports the smart city 
concept and demonstrates how embedded systems and automation can be used to 
solve real-world problems by increasing energy efficiency. 
 
System Architecture:

The Smart Parking Barrier System remotely manages the access of permitted vehicles into EV charging 
stations automatically. During boot-up, the STM32 controller initializes all modules like the RFID reader, 
ultrasonic sensor, OLED display, and the servo motor. A wireless ESP32 module communicates with the STM32 
controller via UART via the ESP-NOW protocol for remote opening/closing and system monitoring in a Wi-Fi 
infrastructure-independent manner. The OLED display initially displays "System Ready," with the device being 
active and waiting for a vehicle to come into proximity. 
 
Expected Results:

At the end of this project, the Smart Parking Barrier System will become a complete and 
working embedded system that controls the access of vehicles at EV charging areas. The system 
will be built on an STM32 microcontroller using the CMSIS framework, which helps create a 
modular, stable, and real-time software structure. 
The system will operate according to a cut-based design. All events, such as RFID card reading, 
ultrasonic distance measurement data reading, and servo motor control, will be managed using 
cuts. This will enable the system to respond quickly and perform actions in real time without delay. 
Additionally, it will be made safer during use with warnings such as LEDs and buzzers. 
A PWM-based servo motor control algorithm will be used to move the barrier arm smoothly and safely. The 
motor will start and stop gradually to avoid sudden movement. If an obstacle or a vehicle is detected while 
closing, the motor will stop immediately to protect the system and the user. 
For the ADC function, weight sensor and ultrasonic sensor will be used to detect if a vehicle is still 
parked in the charging area. The STM32 will read the analog signal from this sensor to understand 
whether the space is occupied or empty. The barrier will only close when  the ultrasonic sensor 
detects no object. This system will make the system safer and more reliable. 
The system will also include all major communication protocols used in embedded systems: 
SPI for the RFID module, I²C for the OLED display, UART between STM32 and ESP32 for ESP
NOW data exchange, and PWM for motor control.. The combination of these protocols will 
demonstrate professional hardware–software integration. 
The code will be written with a modular CMSIS-based organization, separating driver, communication, and 
application layers. This organization will ensure that the code is readable, maintainable, and reusable. 
All project files and progress will be managed through GitHub. The README.md file will contain installation 
steps, connection diagrams and test results.Progress will be documented and made assessable each 
week with the commit history. The repository will include commented source codes, circuit 
diagrams, and weekly updates with clear documentation. This will show strong engineering 
discipline and teamwork in software development. 
In conclusion, the Smart Parking Barrier System will provide a safe, efficient, and automated access 
control solution that can be used in smart city environments. The project will demonstrate real 
engineering skills in system design, hardware–software integration, and real-time embedded control, 
meeting all requirements of the course and achieving high performance in every evaluation category. 

Conclusion:

Smart Parking Barrier System is an efficient and simple solution for the control of electric vehicle (EV) 
charging locations. It integrates sensors, motors, and communication modules to manage the access 
automatically and lock it. The system employs an STM32 microcontroller based on CMSIS for interrupt-based, 
real-time, and fast operation. 
With RFID authentication, ultrasonic sensing, and ESP-NOW wireless control, the barrier functions securely and 
reliablyThe project showcases the way embedded systems and automation can simplify day-to-day life and 
facilitate the concept of smart cities. Overall, it is a hands-on and innovative demonstration of contemporary 
engineering. 

Reference List:

1. https://parklio.com/en/parking-protection/parking-barrier 
2. https://www.spima.com.cy/product-page/smart-parking-barrier-model-x 
3. https://www.temrinler.com/?p=5605  
