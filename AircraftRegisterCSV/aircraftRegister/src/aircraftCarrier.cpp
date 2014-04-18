// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/aircraftCarrier.h"
#include <iostream>
#include <fstream>
using namespace std;



//setter


AircraftCarrier::AircraftCarrier()
{

}

AircraftCarrier::AircraftCarrier(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pNoOfAircraft)

{
	setSurfaceVessel(pVesselName,
					 pSignature,
					 pLength, 
					 pMaxRange, 
					 pMaxSpeed, 
					 pMaxDisp, 
					 pCrew,
					 pType,
					 pNoOfHelicopter);

	_noOfAircraft=pNoOfAircraft;
}

//destructor
AircraftCarrier::~AircraftCarrier()
{

}

//setter
void AircraftCarrier::setNoOfAircraft(unsigned int pNoOfAircraft)
{
	_noOfAircraft=pNoOfAircraft;
	
}

//getter
unsigned int AircraftCarrier::getNoOfAircraft()
{	
	return _noOfAircraft;

}
void AircraftCarrier::display()
{
	SurfaceVessel::display();
	cout<< "Number of Aircraft" << AircraftCarrier::getNoOfAircraft() << endl;
}

void AircraftCarrier::save()
{
	SurfaceVessel::save();

	std::ofstream file;
	file.open("savefile.txt",std::ios::app);

	file<<AircraftCarrier::getNoOfAircraft()<<"\n";
				
	file.close();


}
