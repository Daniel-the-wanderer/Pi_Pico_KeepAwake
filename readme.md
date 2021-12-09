Keep your pc awake using a raspberry pi pico

This works by connecting the pi pico as a keyboard that sends a F13(Shift+F1) keypress at random intervals between 2 and 4:30 minutes, preventing the PC from going to sleep (if set to go to sleep after 5 or more minutes of inactivity)

Code based on the USBUID Keyboard example

Instructions:
1. Install Arduino IDE
2. Run Arduino IDE
3. On "Tools" tab, Go to Board: > Boards Manager..
4. Search for "Arduino Mbed OS RP2040 Boards", and click "Install", some pop-ups will appear, install everything
5. Download the code (Code > Doenload Zip) on the Github page
6. Open "PI_Pico_KeepAwake.ino"
7. Press the button on the pi pico board as you plug in the pi pico, than release the button
8. On "Tools" tab, Go to Board: > Arduino Mbed OS RP2040 Boards > Raspberry Pi Pico
9. Click The Upload button