// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/surfaceVessel.h"
#include <iostream>
#include <fstream>

using namespace std;

unsigned int _noOfHelicopter;

unsigned int getNoOfHelicopter;

//constructor
SurfaceVessel::SurfaceVessel()
{

}
SurfaceVessel::SurfaceVessel(std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pType,
						unsigned int pNoOfHelicopter)

{
	SetVessel( pVesselName,
		  pSignature,
		  pLength,
		  pMaxRange,
		  pMaxSpeed,
		  pMaxDisp,
		  pCrew,
		  pType);

	_noOfHelicopter;

}

//destructor
SurfaceVessel::~SurfaceVessel()
{

}


//setter
void SurfaceVessel::setSurfaceVessel(std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pType,
						unsigned int pNoOfHelicopter)
{
SetVessel( pVesselName,  
		  pSignature,
		  pLength,  
		  pMaxRange,  
		  pMaxSpeed,  
		  pMaxDisp, 
		  pCrew,
		  pType);

		_noOfHelicopter=pNoOfHelicopter;

}



//getter
unsigned int SurfaceVessel::getNoHelicopter()
{
		return _noOfHelicopter;

}

void SurfaceVessel::display()
{
	Vessel::display();
	cout<<"Number of Helicopters :"<< SurfaceVessel::getNoHelicopter() <<endl;

}

void SurfaceVessel::save()
{
	Vessel::save();
	std::ofstream file;
	file.open("savefile.xml",std::ios::app);

	file<<"<NoOfHeli>"<<SurfaceVessel::getNoHelicopter()<<"</NoOfHeli>\n";
		
			
	file.close();

}