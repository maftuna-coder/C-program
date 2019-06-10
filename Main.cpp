#include <iostream>
#include <iomanip>
using namespace std;

// #include"Device.h"
// #include"Tablet.h"
// #include"SmartPhone.h"
#include"iPad.h"
#include"GalaxyNote.h"
#include"GalaxyTab.h"
#include"iPhone.h"

int main()
{
	iPad iipad("Car", 2016, 1, 45, "new");
	GalaxyTab galaxy("Laseti", 2017, 0, 278, "best");
	GalaxyNote ganote("Laptiva", 2001, 758, "norm");
	iPhone iphone("jiguliy", 2018, 454, "hoho");

	iipad.printInfo();
	galaxy.printInfo();
	ganote.printInfo();
	iphone.printInfo();

	return 0;
}
