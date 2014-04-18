#ifndef VESSEL_H
#define VESSEL_H
#include <string>


class  Vessel
{
protected:
	std::string _name;
	unsigned int _length;
	unsigned int _maxRange;
	unsigned int _maxSpeed;
	unsigned int _maxDisp;
	unsigned int _crew;
	unsigned int _signature;
	unsigned int _vesselType;
public:
	//contructor
	Vessel();
	//destructor
	~Vessel();

	//getter
	std::string getVesselName();
	unsigned int getSignature();
	unsigned int getLength();
	unsigned int getMaxRange();
	unsigned int getMaxSpeed();
	unsigned int getMaxDisp();
	unsigned int getCrew();
	unsigned int getType();
	std::string getVessel();

	//setter
	void  SetVessel(	std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength,
						unsigned int pMaxRange,
						unsigned int pMaxSpeed,
						unsigned int pMaxDisp,
						unsigned int pCrew,
						unsigned int pVessType);

	virtual void display();
	virtual void save();

};

#endif