
#include <string>
#include <istream>
using namespace std;

#ifndef DEVICES_H
#define DEVICES_H

class Device
{
public:
	Device(string n, int y);
	~Device();

	void setName(string n);
	string getName();

	void setYearMade(int y);
	int getYearMade();

	void printInfo();
private:
	string name;
	int yearMade;
};

#endif