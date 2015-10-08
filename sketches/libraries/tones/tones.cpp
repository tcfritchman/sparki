#include <sparki.h>
#include "pitches.h"
#include "tones.h"

TonesClass tones;

TonesClass::TonesClass() {
}

void TonesClass::asc1() {
    int pitches[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_B4, NOTE_C5};
    int duration = 60;

    for (int i=0; i<5; i++) {
        sparki.beep(pitches[i], duration);
        delay(duration);
    }
    sparki.noBeep();
}

void TonesClass::asc2() {
    int pitches[] = {NOTE_C5, NOTE_E5, NOTE_G5, NOTE_C6};
    int duration = 60;

    for (int i=0; i<4; i++) {
        sparki.beep(pitches[i], duration);
        delay(duration);
    }
    sparki.noBeep();
}

void TonesClass::desc1() {
    int pitches[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_B4, NOTE_C5};
    int duration = 60;

    for (int i=5; i>0; --i) {
        sparki.beep(pitches[i], duration);
        delay(duration);
    }
    sparki.noBeep();
}

void TonesClass::desc2() {
    int pitches[] = {NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_C6};
    int duration = 60;

    for (int i=4; i>0; --i) {
        sparki.beep(pitches[i], duration);
        delay(duration);
    }
    sparki.noBeep();
}

void TonesClass::ring() {
    ring(5);
}

void TonesClass::ring(int cycles) {
    int duration = 70;

    for (int i=0; i<cycles*2; i++) {
        if (i % 2 == 1) {
            sparki.beep(NOTE_C6);
        } else {
            sparki.beep(NOTE_C5);
        }
        delay(duration);
    }
    sparki.noBeep();
}

void TonesClass::laser() {
    int wait = 2;
    for (int i=2200; i>600; i-=9) {
        sparki.beep(i);
        delay(wait);
    }
    sparki.noBeep();
}
