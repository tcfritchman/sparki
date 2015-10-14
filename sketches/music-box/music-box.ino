#include "pitches.h"
#include <Sparki.h>
#include <IRData.h>

void setup() {
    IRData = new IRDataClass(400, true);
    int scale[16] = {
        0,
        NOTE_C3,
        NOTE_D3,
        NOTE_E3,
        NOTE_F3,
        NOTE_G3,
        NOTE_A3,
        NOTE_B3,
        NOTE_C4,
        NOTE_D4,
        NOTE_E4,
        NOTE_F4,
        NOTE_G4,
        NOTE_A4,
        NOTE_B4,
        NOTE_C5
    };
    int noteDuration = 500;
    sparki.moveForward();
}

void loop() {
    int sensorValue = IRData.readIRAsInt();
    if (sensorValue <= sizeof(scale)/sizeof(scale[0])) {
        sparki.beep(scale[sensorValue]);
    }
    delay(250);
}
