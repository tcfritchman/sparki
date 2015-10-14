class IRDataClass {

private:
    int sensorThreshold;
    bool isBigEndian;

public:
    IRDataClass(int sensorThreshold);
    IRDataClass(int sensorThreshold, bool isBigEndian);
    void setBigEndian(bool val);
    void setSensorThreshold(int val);
    int readIRAsInt();
}
