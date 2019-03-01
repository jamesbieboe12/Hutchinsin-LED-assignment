#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup(){
    FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop(){
    for(int i=0; i<NUM_LEDS; i++){
        leds[i] = CRGB :: Blue;
        leds[(NUM_LEDS-i)] = CRGB :: Yellow;
        FastLED.show();
        delay(30);
        leds[i] = CRGB :: Black;
        leds[(NUM_LEDS - i)] = CRGB :: Black;
        //blue and yellow light up and meet in the middle and the led lights green
        leds[67] = CRGB::Green; 
        FastLED.show();
        delay(500);
        leds[i] = CRGB :: Green;
        delay(100);
        leds[(NUM_LEDS-i)] = CRGB :: Black;
        //tells leds to go green then black
        leds[i] = CRGB :: Red;
        //the leds finishes off as a red light
    }
     for(int i=0; i<NUM_LEDS; i++){
         leds[i] = CRGB :: White;
        leds[(NUM_LEDS-i)] = CRGB :Red;
        FastLED.show();
        delay(30);
}
    for(int i=0; i<NUM_LEDS; i++){
       leds[20] = CRGB :: White; 
        leds[130] = CRGB :: White;
        leds[50] = CRGB :: White;
        leds[70] = CRGB :: White;
    }
}
        
