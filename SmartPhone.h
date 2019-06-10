
#include <iostream>
#include <string>
using namespace std;

#ifndef SMART_PHONE
#define SMART_PHONE

#include "Device.h"

class SmartPhone : public Device
{
private:
	int cameraSize;

public:
	SmartPhone(string n, int y, int cs);

	void setCameraSize(int cs);
	int getCameraSize();

	void printInfo();
};

#endif