#ifndef CONSTANTS_HPP_INCLUDED
#define CONSTANTS_HPP_INCLUDED

// pin mapping

// input
#define PRINTER_INPUT_PIN 28
#define EXTERNAL_VENTILATION_SWITCH_PIN 24

//output
#define PWR_ARDUINO_PIN 23
#define PWR_LIGHT_PIN 39
#define PWR_ENCLOSURE_PIN 35
#define PWR_ENCLOSURE_VENT_PIN 31
#define PWR_EXTERNAL_VENT_PIN 27

// timeouts in ms
#define LEDLIGHTING_TIMEOUT 15000
#define BACKLIGHT_TIMEOUT 60000
#define ENCLOSUREPOWER_TIMEOUT 66000
#define ENCLOSUREVENTILATION_TIMEOUT 10000
#define SCREENSAVER_TIMEOUT 10000

// tolerances in ms
#define PRINTER_ON_TOLERANCE 1000
#define PRINTER_OFF_TOLERANCE 1000

#endif
