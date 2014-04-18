#ifndef SUBMARINE_H
#define SUBMARINE_H


#include "vessel.h"
#include <string>

class Submarine :public Vessel
{
protected : 
unsigned int _maxDiveDepth;
unsigned int _maxSpeedSubmerge;
unsigned int _displacementSubmerge;

public :
	//constructor
	Submarine();
	Submarine(std::string pVesselName,
				unsigned int pSignature,
				unsigned int pLength, 
				unsigned int pMaxRange, 
				unsigned int pMaxSpeed, 
				unsigned int pMaxDisp, 
				unsigned int pCrew,
				unsigned int pVessType,
				unsigned int pMaxDive,
				unsigned int pMaxSpeedSubmerge,
				unsigned int pDispSubmerge);
	//destructor
	~Submarine();

	//setter
	void setSubmarine (	
						std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pVessType,
						unsigned int pMaxDive,
						unsigned int pmaxSpeedSubmerge,
						unsigned int pDispSubmerge);

	//getter
	Submarine getSubmarine();
	unsigned int getMaxDiveDepth();
	unsigned int getMaxSpeedSubmerge();
	unsigned int getDispSubmerge();

	
    
	virtual void display();

	virtual void save();
	
};

#endif