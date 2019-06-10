#include<iostream>
using namespace std;

#include "iPad.h"

iPad::iPad(string n, int y, bool t, int s, string i)
	: Tablet(n, y, t, s)
{
	setIOSversion(i);
}

void iPad::setIOSversion(string i)
{
        iOSversion=i;
}

string iPad::getIOSversion()
{
	return iOSversion;
}
void iPad::printInfo()
{
	cout << "\n iPad: " << endl;
		Tablet::printInfo();
	cout << "\n cameraSize: " << getIOSversion() << endl;
}

