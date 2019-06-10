
#include <string>
using namespace std;

#ifndef GALAXYNO_H
#define GALAXYNO_H

#include "SmartPhone.h"

class GalaxyNote : public SmartPhone
{
public:
	GalaxyNote(string n, int y, int c, string an);

	void setAndroidVERsion(string an);
	string getAndroidVERsion();

	void printInfo();
private:
	string androidVERrsion;
};

#endif
