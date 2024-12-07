# Лабораторная работа №2

Плата: ESP32-WROOM-32
Датчик: DHT11
Модуль времени: RtcDS1302
Дисплей: 16x2

Подключение:
1) DHT11:
    GND -> GND
    VCC -> 5V
    PIN -> GPIO 5
2) RtcDS1302:
    VCC -> 3V3
    GND -> GND
    CLK -> GPIO 14
    DAT -> GPIO 27
    RST -> GPIO 26
3) LiquidCristal LCD:
    GND -> GND
    VCC -> 5V
    SDA -> GPIO 21
    SCL -> GPIO 22

_Схема №1:_
![res1](https://github.com/ArtemDyrdin/MCprogramming/blob/main/lab_2/res/res1.jpg)