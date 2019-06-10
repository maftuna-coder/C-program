#include<iostream>
using namespace std;

#include "GalaxyTab.h"

GalaxyTab::GalaxyTab(string n, int y, bool t, int s, string a)
:Tablet(n, y, t, s)
{
	setAndroidVersion(a);
}

void GalaxyTab::setAndroidVersion(string a)
{
	androidVersion = a;
}

string GalaxyTab::getAndroidVersion()
{
	return androidVersion;
}
void GalaxyTab::printInfo()
{
	cout << "\n GalaxyTab: " << endl;
		Tablet::printInfo();
	cout << "\n cameraSize: " << getAndroidVersion() << endl;
}

