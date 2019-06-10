
#include <string>
using namespace std;

#ifndef TABLETT_H
#define TABLETT_H

#include"Device.h"

class Tablet : public Device
{
public:
	Tablet(string n, int y, bool GS, int s);
	~Tablet();

	void set3gSupport(bool GS);
	bool get3gSupport();

	void setScreenSize(int s);
	int getScreenSize();

	void printInfo();
private:
	bool threeGSupport;
	int screenSize;
};
#endif