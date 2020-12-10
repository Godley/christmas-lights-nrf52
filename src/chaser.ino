void chaser() {
    for(int i = 0; i < NUM_LEDS; i++) {
        leds[i] = CRGB::Red;
        FastLED.show();
        FastLED.delay(20);
    }
    for(int i = 0; i < NUM_LEDS; i++) {
        leds[i] = CRGB::Black;
        FastLED.show();
        FastLED.delay(20);
    }
}