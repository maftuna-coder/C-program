
#include "SmartPhone.h"

SmartPhone::SmartPhone(string n, int y, int cs)
: Device(n, y), cameraSize(cs)
{
	setCameraSize(cs);
}

void SmartPhone::setCameraSize(int cs)
{
	cameraSize = cs;
}

int SmartPhone::getCameraSize()
{
	return cameraSize;
}

void SmartPhone::printInfo()
{
	Device::printInfo();
	cout << "Camera Size: " << getCameraSize() << endl;
}