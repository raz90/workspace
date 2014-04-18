#ifndef DESTROYER_H
#define DESTROYER_H

#include "surfaceVessel.h"

class Destroyer : public SurfaceVessel
{
protected:
	unsigned int _primaryWeapon;

public:
	//constructor
	Destroyer();

	Destroyer(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pType,
		unsigned int pNoOfHelicopter,
		unsigned int pPrimaryWeapon);
	//destrcutor
	~Destroyer();

	//setter

	void setPrimaryWeapon(int pNoOfAircraft);

	//getter
	unsigned int getPrimaryWeapon();

	virtual void display();

	virtual void save();

};

#endif