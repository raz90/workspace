// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/submarine.h"
#include <iostream>
#include <fstream>

using namespace std;

unsigned int _maxDiveDepth;
unsigned int _maxSpeedSubmerge;
unsigned int _displacementSubmerge;

unsigned int getMaxDiveDepth();
unsigned int getMaxSpeedSubmerge();
unsigned int getDispSubmerge();

//constructor
Submarine::Submarine()
{

}

Submarine::Submarine(std::string pVesselName,
							unsigned int pSignature,
							unsigned int pLength, 
							unsigned int pMaxRange, 
							unsigned int pMaxSpeed, 
							unsigned int pMaxDisp, 
							unsigned int pCrew,
							unsigned int pVessType,
							unsigned int pMaxDive,
							unsigned int pMaxSpeedSubmerge,
							unsigned int pDispSubmerge)
{
SetVessel( pVesselName,  pSignature,pLength,  pMaxRange,  pMaxSpeed,  pMaxDisp, pCrew,pVessType);
_maxDiveDepth=pMaxDive;
_maxSpeedSubmerge=pMaxSpeedSubmerge;
_displacementSubmerge=pDispSubmerge;
}



//destructor
Submarine::~Submarine()
{

}
//setter
void Submarine::setSubmarine(std::string pVesselName,
							unsigned int pSignature,
							unsigned int pLength, 
							unsigned int pMaxRange, 
							unsigned int pMaxSpeed, 
							unsigned int pMaxDisp, 
							unsigned int pCrew,
							unsigned int pVessType,
							unsigned int pMaxDive,
							unsigned int pMaxSpeedSubmerge,
							unsigned int pDispSubmerge)
{
SetVessel( pVesselName,  
		  pSignature,
		  pLength,  
		  pMaxRange,  
		  pMaxSpeed,  
		  pMaxDisp, 
		  pCrew,
		  pVessType);
_maxDiveDepth=pMaxDive;
_maxSpeedSubmerge=pMaxSpeedSubmerge;
_displacementSubmerge=pDispSubmerge;
}


//getter

Submarine Submarine::getSubmarine()
{

return *this;

}

unsigned int Submarine::getMaxDiveDepth()
{
return _maxDiveDepth;

}

unsigned int Submarine::getMaxSpeedSubmerge()
{
return _maxSpeedSubmerge;
}

unsigned int Submarine::getDispSubmerge()
{
return _displacementSubmerge;
}


void Submarine::display()
{
Vessel::display();
cout<<"maxDiveDepth : "<<getMaxDiveDepth()<<endl;
cout<<"MaxspeedSubmerge : "<<getMaxSpeedSubmerge()<<endl;
cout<<"DispSubmerge : "<<getDispSubmerge()<<endl;


}

void Submarine::save()
{
	Vessel::save();
	std::ofstream file;
	file.open("savefile.xml",std::ios::app);

	file<<"\t\t\t<MaxDive>"<<Submarine::getMaxDiveDepth()<<"</MaxDive>\n"
		<<"\t\t\t<maxSubmerge>"<<Submarine::getMaxSpeedSubmerge()<<"</maxSubmerge>\n"
		<<"\t\t\t<DispSubmerge>"<<Submarine::getDispSubmerge()<<"</DispSubmerge>\n";
		
			
	file.close();


}