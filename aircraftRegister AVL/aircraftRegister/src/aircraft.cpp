// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/aircraft.h"
#include <iostream>
using namespace std;

unsigned int _noOfAircraft;

unsigned int getNoOfAircraft();

Aircraft::Aircraft()
{
	
}

Aircraft::~Aircraft()
{

}

//setter
void Aircraft::SetAircraft(unsigned int pNoOfAircraft)
{
	_noOfAircraft=pNoOfAircraft;
}

unsigned int Aircraft::getNoOfAircraft()
{
	return _noOfAircraft;
}
