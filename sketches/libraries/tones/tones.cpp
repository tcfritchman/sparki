#include <sparki.h>
#include "pitches.h"
#include "tones.h"

TonesClass tones;

void TonesClass::ascTones() {
    int pitches[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_B5, NOTE_C5};
    int duration = 100;

    for (int i; i<5; i++) {
        sparki.beep(pitches[i], duration);
    }
}
