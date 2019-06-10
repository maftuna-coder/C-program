

#include <string>
using namespace std;

#ifndef IPHONE_H
#define IPHONE_H

#include "Smartphone.h"

class iPhone : public SmartPhone
{
public:
	iPhone(string n, int y, int c, string io);

	void setiosVERsion(string io);
	string getiosVERsion();

	void printInfo();
private:
	string iosVERrsion;
};

#endif
