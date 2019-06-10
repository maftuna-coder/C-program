
#include<iostream>
using namespace std;

#include "GalaxyNote.h"

GalaxyNote::GalaxyNote(string n, int y, int c, string an)
:SmartPhone(n, y, c)
{
	setAndroidVERsion(an);
}

void GalaxyNote::setAndroidVERsion(string an)
{
	androidVERrsion = an;
}

string GalaxyNote::getAndroidVERsion()
{
	return androidVERrsion;
}
void GalaxyNote::printInfo()
{
	cout << "\n GalaxyNote: ";
		SmartPhone::printInfo();
	cout << "\n cameraSize: " << getAndroidVERsion() << endl;
}

