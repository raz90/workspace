// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/fleetAuxillary.h"
#include <iostream>
#include <fstream>
using namespace std;

unsigned int _deckSpace;
unsigned int _storageCapacity;

unsigned int getDeckSPace();
unsigned int getStorageCapacity();

FleetAuxillary::FleetAuxillary()
{

}

FleetAuxillary::FleetAuxillary(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity)

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

	_deckSpace=pDeckSpace;
	_storageCapacity=pStorageCapacity;

}

//destructor
FleetAuxillary::~FleetAuxillary()
{

}

//setter
void FleetAuxillary::setFleetAuxillary(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity)

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

		_deckSpace=pDeckSpace;
		_storageCapacity=pStorageCapacity;

}

unsigned int FleetAuxillary::getDeckSpace()
{
	return _deckSpace;

}

unsigned int FleetAuxillary::getStorageCapacity()
{
	return _storageCapacity;

}

void FleetAuxillary::display()
{
	SurfaceVessel::display();

	cout<<" Deck Space :"<< FleetAuxillary::getDeckSpace()<<"  Square meters"<<endl;
	

	cout<<" Storage Capacity :"<< FleetAuxillary::getStorageCapacity()<<"  Cubic Meters"<<endl;
}


void FleetAuxillary::save(std::string filename)
{
	SurfaceVessel::save(filename);

	std::ofstream file;
	file.open("savefile.txt",std::ios::app);

	file<<FleetAuxillary::getDeckSpace()<<","
		<<FleetAuxillary::getStorageCapacity()<<",";
					
	file.close();


}
