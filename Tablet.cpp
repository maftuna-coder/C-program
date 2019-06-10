#include <iostream>
#include <string>
using namespace std;

#include"Tablet.h"

Tablet::Tablet(string n, int y, bool GS, int s)
: Device(n, y)
{
	set3gSupport(GS);
	setScreenSize(s);

	cout << "Tablet constructor: " << endl;
	printInfo();
	cout << "\n\n";
}

Tablet::~Tablet()
{
	cout << "Tablet destructor: " << endl;
	printInfo();
	cout << "\n\n";
}

void Tablet::set3gSupport(bool GS)
{
	threeGSupport = GS;
}

bool Tablet::get3gSupport()
{
	return threeGSupport;
}

void Tablet::setScreenSize(int s)
{
	screenSize = s;
}

int Tablet::getScreenSize()
{
	return screenSize;
}

void Tablet::printInfo()
{
	cout << "Tablet" << endl;
	Device::printInfo();
	cout << "\n 3gSupport: " << get3gSupport()
		<< "\n screenSize: " << getScreenSize();
}

