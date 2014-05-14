// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/landingPlatformDock.h"
#include <iostream>
#include <fstream>
using namespace std;


//setter
LandingPlatformDock::LandingPlatformDock()
{

}

LandingPlatformDock::LandingPlatformDock (std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity,
								unsigned int pNoOfAircraft)

{
	setFleetAuxillary(pVesselName,
					 pSignature,
					 pLength, 
					 pMaxRange, 
					 pMaxSpeed, 
					 pMaxDisp, 
					 pCrew,
					 pType,
					 pNoOfHelicopter,
					 pDeckSpace,
					 pStorageCapacity);
	
	_noOfAircraft=pNoOfAircraft;

}

//destructor
LandingPlatformDock::~LandingPlatformDock()
{

}

//setter
void LandingPlatformDock::setNoOfAircraft(unsigned int pNoOfAircraft)
{
	_noOfAircraft=pNoOfAircraft;
}

//getter
unsigned int LandingPlatformDock::getNoOfAircraft()
{
	return _noOfAircraft;


}

void LandingPlatformDock::display()
{
	FleetAuxillary::display();
	cout << "Number of Aircraft :" << LandingPlatformDock::getNoOfAircraft() <<endl;

}


void LandingPlatformDock::save(std::string filename)
{
	FleetAuxillary::save(filename);
	


	std::ofstream file;
	file.open("savefile.txt",std::ios::app);

	file<<LandingPlatformDock::getNoOfAircraft()<<"\n";
					
	file.close();

}
