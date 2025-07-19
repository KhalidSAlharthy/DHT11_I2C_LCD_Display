#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// Set up the LCD - address 0x27 is common, check yours if needed
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Set DHT sensor type and pin
#define DHTPIN 2       // Data pin connected to D2
#define DHTTYPE DHT11  // DHT11 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.init();          // Initialize the LCD
  lcd.backlight();     // Turn on the backlight
  dht.begin();         // Initialize the DHT sensor

  lcd.setCursor(0, 0);
  lcd.print("Temp & Humidity");
  delay(2000);
  lcd.clear();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Celsius

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error   ");
    delay(2000);
    return;
  }

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature, 1); // One decimal place
  lcd.print((char)223);      // Degree symbol
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(humidity, 1);
  lcd.print("%   ");

  delay(2000); // Refresh every 2 seconds
}
