#include <sparki.h>
#include "IRData.h"

private:
    int sensorThreshold;
    bool isBigEndian = false;

IRDataClass::IRDataClass(int sensorThreshold) {
    this.sensorThreshold = sensorThreshold;
}

IRDataClass::IRDataClass(int sensorThreshold, bool isBigEndian) {
    this.sensorThreshold = sensorThreshold;
    this.isBigEndian = isBigEndian;
}

void IRDataClass::setBigEndian(bool val) {
    this.isBigEndian = val;
}

void IRDataClass::setSensorThreshold(int val) {
    this.sensorThreshold = val;
}

int IRDataClass::readIRAsInt() {
    int S1, S2, S3, S4, S5;
    int V1 = 0;
    int V2 = 0;
    int V3 = 0;
    int V4 = 0;
    int V5 = 0;

    S1 = sparki.edgeLeft;
    S2 = sparki.lineLeft;
    S3 = sparki.lineCenter;
    S4 = sparki.lineRight;
    S5 = sparki.edgeRight;

    if (S1 < this.SensorThreshold) {
        V1 = 1;
    }

    if (S2 < this.SensorThreshold) {
        V2 = 1;
    }

    if (S3 < this.SensorThreshold) {
        V3 = 1;
    }

    if (S4 < this.SensorThreshold) {
        V4 = 1;
    }

    if (S5 < this.SensorThreshold) {
        V5 = 1;
    }

    if (this.isBigEndian) {
        V1 = V1 << 4;
        V2 = V2 << 3;
        V3 = V3 << 2;
        V4 = V4 << 1;
    } else {
        V5 = V5 << 4;
        V4 = V4 << 3;
        V3 = V3 << 2;
        V2 = V2 << 1;
    }

    return V1 | V2 | V3 | V4 | V5;
}
