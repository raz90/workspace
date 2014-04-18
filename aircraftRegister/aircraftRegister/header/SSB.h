#ifndef SSB_H
#define SSB_H

#include "submarine.h"

class SSB : public  Submarine
{
protected:
	unsigned int _totalSLBM;

public:
	//constructor
	SSB(); 

	SSB(std::string pVesselName,
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
		unsigned int pTotalSLBM);


	//destructor
	~SSB();

	//setter

	void setTotalSLBM(int pTotalSLBM);
	

	//getter
	unsigned int getTotalSLBM();

	virtual void display();

	virtual void save();
};

#endif