// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/vessel.h"
#include <iostream>
#include <fstream>
using namespace std;

//getter
	string getVesselName();
	unsigned int getSignature();
	unsigned int getLength();
	unsigned int getMaxRange();
	unsigned int getMaxSpeed();
	unsigned int getMaxDisp();
	unsigned int getCrew();
	unsigned int getType();

	//setter
	void SetVessel(		string pVesselName,
						unsigned int pSignature,
						unsigned int pMaxRange,
						unsigned int pMaxSpeed,
						unsigned int pMaxDisp,
						unsigned int  pCrew,
						unsigned int pVessType);


	//constructor
	Vessel::Vessel()
	{
	
	}

	Vessel::~Vessel()
	{
	
	}

	//set the vessel attribute
	 void Vessel::SetVessel(std::string pVesselName, unsigned int pSignature,unsigned int pLength, unsigned int pMaxRange, unsigned int pMaxSpeed, unsigned int pMaxDisp, unsigned int pCrew,unsigned int pVessType)
	{
	 _name=pVesselName;
	 _length=pLength;
	 _maxRange=pMaxRange;
	 _maxSpeed=pMaxSpeed;
	 _maxDisp=pMaxDisp;
	 _crew=pCrew;
	 _signature=pSignature;
	 _vesselType=pVessType;
	
	}
	
	 
	 //getter
	string Vessel::getVesselName()
	{
	return _name;
	
	}

	unsigned int Vessel::getSignature()
	{
	return _signature;
	}

	unsigned int Vessel::getLength()
	{
	return _length;
	}

	unsigned int Vessel::getMaxRange()
	{
	return _maxRange;
	}

	unsigned int Vessel::getMaxSpeed()
	{
	return _maxSpeed;
	}

	unsigned int Vessel::getMaxDisp()
	{
	return _maxDisp;
	}

	unsigned int Vessel::getCrew()
	{
	return _crew;
	}

	unsigned int Vessel::getType()
	{
	return _vesselType;
	}

	
	void Vessel::display()
	{
	cout<<"vessel name : "<<_name<<endl;
	cout<<"signature id : "<<_signature<<endl;
	cout<<"length : "<<_length<<endl;
	cout<<"maximum speed : "<<_maxSpeed<<endl;
	cout<<"maximum Range : "<<_maxRange<<endl;
	cout<<"Displacement : "<<_maxDisp<<endl;
	cout<<"crew : "<<_crew<<endl;
	cout<<"Vessel Type :"<<_vesselType<<endl;

	
	}

	string Vessel::getVessel()
	{
	std::string name;
	name=_name,_signature;
	return name;

	
	
	}

	void Vessel::save()
	{
	std::ofstream file;
	file.open("savefile.txt",std::ios::app);

	file<<"$"<<Vessel::getType()<<","
		<<Vessel::getSignature()<<","
		<<Vessel::getVesselName()<<","
		<<Vessel::getMaxSpeed()<<","
		<<Vessel::getLength()<<","
		<<Vessel::getMaxRange()<<","
		<<Vessel::getMaxDisp()<<","	
		<<Vessel::getCrew()<<",";
		
	
	file.close();
	
	
	}

	