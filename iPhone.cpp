
#include<iostream>
using namespace std;

#include "iPhone.h"

iPhone::iPhone(string n, int y, int c, string io)
	: SmartPhone(n, y, c)
{
	setiosVERsion(io);
}

void iPhone::setiosVERsion(string io)
{
     iosVERrsion = io;
}

string iPhone::getiosVERsion()
{
	return iosVERrsion;
}
void iPhone::printInfo()
{
	cout << "\n iPhone: " << endl;
	SmartPhone::printInfo();
	cout << "\n cameraSize: " << getiosVERsion() << endl;
}
