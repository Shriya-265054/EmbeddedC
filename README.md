# EmbeddedC

## Seat Heating App




### Case Study: 
![casestudy](https://github.com/Shriya-265054/EmbeddedC/blob/main/simulation/case%20study.PNG)

### The activity is performed using Atmega328 Microcontroller.
1. Button sensor will check whether the passenger is sited or not. (if passenger is sited the button sensor gets on and vice versa.)
2. Working of temperature sensor is as follows: 

![temp](https://github.com/Shriya-265054/EmbeddedC/blob/main/simulation/temp.PNG)

3. Display CDD-CRO will give the temperature value by showing Pulse Width Modulation.
4. LED Actuator shows the driver is sited. (If button sensor and heater sensor is on then LED starts glowing or else it is in off state.)
5. Heater will check the heater button is ON. 
6. Temp to CAN shows the value of temperature gone over UART communication protocol and the data gets displayed on serial monitor. 

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
[![Compile-Linux](https://github.com/Shriya-265054/EmbeddedC/actions/workflows/Compile.yml/badge.svg)](https://github.com/Shriya-265054/EmbeddedC/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/Shriya-265054/EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/Shriya-265054/EmbeddedC/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/44d5a86dd7c24d0aa4f1e2eb272187e6)](https://www.codacy.com/gh/Shriya-265054/EmbeddedC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Shriya-265054/EmbeddedC&amp;utm_campaign=Badge_Grade)|

