#ifndef TANKER_H
#define TANKER_H

#include "fleetAuxillary.h"

class Tanker: public FleetAuxillary
{


public:
	//constructor
	Tanker();

	Tanker(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pType,
		unsigned int pNoOfHelicopter,
		unsigned int pDeckSpace,
		unsigned int pStorageCapacity);

	//destrcutor
	~Tanker();
	
	//setter
	void setTanker(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity);

	//getter
	unsigned int getDeckSpace();
	unsigned int getStorageCapacity();

	virtual void display();

	virtual void save();
};
#endif 