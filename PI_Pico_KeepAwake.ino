#include "PluggableUSBHID.h"
#include "USBKeyboard.h"

USBKeyboard Keyboard;

void setup() {
  // put your setup code here, to run once:

  // Set yhe build-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Send the F13(Shift+F1) keypress
  Keyboard.key_code(KEY_F1, KEY_SHIFT);

  // light up the LED after sending the keypress
  digitalWrite(LED_BUILTIN, HIGH);

  //Wait half a second before turning off the LED
  delay(500);

  //Turn off the LED
  digitalWrite(LED_BUILTIN, LOW);

  //Wait a random amount of time between 2 minutes (120s) and 4:30 minutes (270s) before the next keypress
  delay(random(120000, 270000));
  
}
