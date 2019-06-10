//U1510067
//Maftuna Sharabbeva
#include <iostream>
using namespace std;

#include "Device.h"

Device::Device(string n, int y)
	: name(n), yearMade(y)
{
	setName(n);
	setYearMade(y);
	cout << "Device constructor: " << endl;
	
	cout << "\n\n";
}

Device::~Device()
{
	cout << "Device destructor" << endl;
	
	cout << "\n\n";
}

void Device::setName(string n)
{
	name = n;
}

string Device::getName()
{
	return name;
}

void Device::setYearMade(int y)
{
	yearMade = y;
}

int Device::getYearMade()
{
	return yearMade;
}

void Device::printInfo()
{
	cout << "device: "
		<< getName() << ' '
		<< "Made in " << getYearMade() << endl;	
}
