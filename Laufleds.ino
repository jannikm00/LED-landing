
#include <FastLED.h>


#define NUM_LEDS 301

#define DATA_PIN 3
#define CLOCK_PIN 13

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

}

void loop() {
  int count = 0;
  if (0==0) { //Laufband dependancy
    while (count < 5) {


      leds[count] = CRGB::White;
      FastLED.show();
      delay(135);
      leds[count] = CRGB::Black;
      FastLED.show();
      count++;

    }
    leds[count] = CRGB::Black;
    count = 0;
  }
}
