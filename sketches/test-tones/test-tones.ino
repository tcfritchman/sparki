#include <Sparki.h>
#include <tones.h>

void setup() {
    tones.asc1();
    delay(1000);
    tones.asc2();
    delay(1000);
    tones.desc1();
    delay(1000);
    tones.desc2();
    delay(1000);
    tones.ring();
    delay(1000);
    tones.ring(15);
    delay(1000);
    tones.laser();
}

void loop() {
}
