#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>

// Initialise LCD over I2C.
void initDisplay();

// Call from loop() – rotates through LCD screens on a timer.
void updateDisplay();

// Show a BLE pairing PIN on the LCD (blocks normal rotation until cleared).
void displayPairingPin(uint32_t pin);

// Clear the pairing PIN and resume normal display rotation.
void clearPairingPinDisplay();

// Force the LCD backlight on/off.
void setLcdBacklight(bool on);

// Returns true when the LCD is currently backlit.
bool isLcdBacklightOn();

#endif // DISPLAY_H
