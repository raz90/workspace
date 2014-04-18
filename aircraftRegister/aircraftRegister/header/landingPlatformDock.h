#ifndef LANDINGPLATFORMDOCK_H
#define LANDINGPLATFORMDOCK_H

#include "fleetAuxillary.h"

class LandingPlatformDock : public FleetAuxillary
{
protected:
	unsigned int _noOfAircraft;

public:
	//constructor
	LandingPlatformDock();

	LandingPlatformDock(std::string pVesselName,
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
		unsigned int pNoOfAircraft);
	//destrcutor
	~LandingPlatformDock();

	//setter
	void setNoOfAircraft(unsigned int pNoOfAircraft);



	//getter
	unsigned int getNoOfAircraft();


	virtual void display();

	virtual void save();

};

#endif