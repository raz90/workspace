#ifndef FLEETAUXILLARY_H
#define FLEETAUXILLARY_H

#include "surfaceVessel.h"

class FleetAuxillary : public SurfaceVessel
{
protected:
	unsigned int _deckSpace;
	unsigned int _storageCapacity;

public:
	//constructor
	FleetAuxillary();

FleetAuxillary(std::string pVesselName,
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
	~FleetAuxillary();

	//setter
    void setFleetAuxillary(std::string pVesselName,
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