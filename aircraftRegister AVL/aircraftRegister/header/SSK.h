#ifndef SSK_H
#define SSK_H

#include "submarine.h"

class SSK : public  Submarine
{
protected:
	unsigned int _noOfTorpedo;

public:
	//constructor
	SSK();

	SSK(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pVessType,
		unsigned int pMaxDive,
		unsigned int pMaxSpeedSubmerge,
		unsigned int pDispSubmerge,
		unsigned int pNoTorpedo);
	//destructor
	~SSK();

	//setter

	void setNoTorpedo(int ptorpedo);
	

	//getter
	unsigned int getNoTorpedo();

	virtual void display();

	virtual void save();
};

#endif