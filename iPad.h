

#include <string>
using namespace std;

#ifndef IPAD_H
#define IPAD_H

#include "Tablet.h"

class iPad : public Tablet
{
public:
	iPad(string n, int y, bool t, int s, string i);

	void setIOSversion(string i);
	string getIOSversion();

	void printInfo();
private:
	string iOSversion;
};

#endif
