#ifndef AIRCRAFTCARRIER_H
#define AIRCRAFTCARRIER_H

#include "surfaceVessel.h"


class AircraftCarrier : public SurfaceVessel
{
protected:
	unsigned int _noOfAircraft;

public:
	//constructor
	AircraftCarrier();

	AircraftCarrier(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pType,
		unsigned int pNoOfHelicopter,
		unsigned int pNoOfAircraft);
	//destrcutor
	~AircraftCarrier();

	//setter
	void setNoOfAircraft (unsigned int pNoOfAircraft);

	//getter
	unsigned int getNoOfAircraft();

	virtual void display();

	virtual void save();

};

#endif