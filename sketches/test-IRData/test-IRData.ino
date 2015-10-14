#include <Sparki.h>
#include <IRData.h>

void setup() {
    IRData = new IRDataClass(400, true);

}

void loop() {
    int data = IRData.readIRAsInt();
    char disp[6] = {'0', '0', '0', '0', '0', '\0'};
    int mask = 16;
    for (int i=0; i<5; i++) {
        if (mask & data) {
            disp[i] = 1;
        }
        mask = mask >> 1;
    }
    sparki.println(disp);
    delay(2000);
}
