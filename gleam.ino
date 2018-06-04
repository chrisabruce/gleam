#include "FastLED.h"
#define NUM_LEDS 94
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);
}


void loop() {
  for (int dot = 0; dot < NUM_LEDS; dot++) {
    leds[dot] = CRGB::CadetBlue;
    FastLED.show();
    // clear this led for the next time around the loop
    leds[dot] = CRGB::Black;
    delay(5);
  }
  for (int dot = NUM_LEDS-1; dot > -1; dot--) {
    leds[dot] = CRGB::White;
    FastLED.show();
    // clear this led for the next time around the loop
    leds[dot] = CRGB::Black;
    delay(10);
  }
}
