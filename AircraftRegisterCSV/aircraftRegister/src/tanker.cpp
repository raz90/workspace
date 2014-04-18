// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:

#include "../header/tanker.h"
#include <string>
#include <iostream>
#include <fstream>
//contrustor
Tanker::Tanker()
{

}
//destructor
Tanker::~Tanker()
{

}

//setter

Tanker::Tanker(std::string pVesselName,
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

//getter
unsigned int Tanker::getDeckSpace()
{
	return _deckSpace;

}

unsigned int Tanker::getStorageCapacity()
{
	return _storageCapacity;

}

void Tanker::display()
{
	FleetAuxillary::display();

	std::cout<<" Deck Space :" <<Tanker::getDeckSpace()<<std::endl;
	

	std::cout<<" Storage Capacity :" << Tanker::getStorageCapacity()<<std::endl;
}

void Tanker::save()
{
	FleetAuxillary::save();


	std::ofstream file;
	file.open("savefile.txt",std::ios::app);

	file<<Tanker::getDeckSpace()<<","
		<<Tanker::getStorageCapacity()<<"\n";
					
	file.close();



}
