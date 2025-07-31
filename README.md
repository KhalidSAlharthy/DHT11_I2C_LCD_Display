# DHT11_I2C_LCD_Display
This Arduino project reads temperature and humidity data from the DHT11 sensor and displays the readings on a 16x2 I2C LCD screen. It’s a simple and useful setup for monitoring environmental conditions in real-time using minimal wiring.

# Table Of Content
- (Components Used)(#Components-Used)
- 
# Components Used

| Component         | Description                                     |
| ----------------- | ----------------------------------------------- |
| Arduino UNO/Nano  | Microcontroller Board                           |
| DHT11             | Temperature and Humidity Sensor                 |
| I2C LCD 16x2      | LCD with I2C interface (SDA/SCL)                |
| Jumper Wires      | For connections                                 |
| Breadboard        | For easy prototyping                            |
| 9V Battery (Opt.) | For portable power (via barrel jack or VIN pin) |

# Connections

 DHT11
- VCC → + on breadboard
- GND → - on breadboard
- DATA → D2 on Arduino

 I2C LCD 
- VCC → + on breadboard
- GND → - on breadboard
- SDA → A4 on  Arduino
- SCL → A5 on  Arduino

Breadboard 
- (-) → GND on Arduino
- (+) → 5V on Arduino 

> 💡 Note: SDA/SCL pins may vary depending on your Arduino board.

# Libraries Required

Install these libraries via the Arduino Library Manager:

- `DHT sensor library` by Adafruit  
- `Adafruit Unified Sensor`  
- `LiquidCrystal_I2C` by Frank de Brabander

# Simulation
The circuit was simulated using Fritzing.

<img width="1041" height="773" alt="459414446-13b005d7-01f4-42c6-9e71-53811f634b69" src="https://github.com/user-attachments/assets/29be5e5a-5566-46ad-b0f8-ac6391ed3c03" />

# Hardware Implementation
This project was physically built and tested using real components.

![459415603-5891d636-c9ed-4a88-95f0-055a8f9fc8fe](https://github.com/user-attachments/assets/f2b82877-a5bf-4bd3-9260-9453d2505e6d)

