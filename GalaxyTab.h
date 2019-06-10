
#include <string>
using namespace std;

#ifndef GALAXY_H
#define GALAXY_H

#include "Tablet.h"

class GalaxyTab : public Tablet
{
public:
	GalaxyTab(string n, int y, bool t, int s, string a);

	void setAndroidVersion(string a);
	string getAndroidVersion();

	void printInfo();
private:
	string androidVersion;
};

#endif
