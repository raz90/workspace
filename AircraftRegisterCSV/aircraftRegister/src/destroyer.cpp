// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "../header/destroyer.h"
#include <iostream>
#include <fstream>
using namespace std;

unsigned int _primaryWeapon;

unsigned int getPrimaryWeapon();

Destroyer::Destroyer()
{

}

Destroyer::Destroyer(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pPrimaryWeapon)

{
	setSurfaceVessel(pVesselName,
					 pSignature,
					 pLength, 
					 pMaxRange, 
					 pMaxSpeed, 
					 pMaxDisp, 
					 pCrew,
					 pType,
					 pNoOfHelicopter);

	_primaryWeapon=pPrimaryWeapon;

}

//destructor
Destroyer::~Destroyer()
{

}

void Destroyer::setPrimaryWeapon(int pPrimaryWeapon)
{
	_primaryWeapon=pPrimaryWeapon;

}
unsigned int Destroyer::getPrimaryWeapon()
{
	return _primaryWeapon;

}

void Destroyer::display()
{
	int gunType=1;
	int guidedMissileType=2;
	SurfaceVessel::display();

	if (getPrimaryWeapon()==gunType)
	{
	cout<<" Primary Weapon : Gun Type"<<endl;
	}
	else if (getPrimaryWeapon()==guidedMissileType)
	{
	cout<<" Primary Weapon : guided missile type"<<endl;
	}
	else
	{
	cout<<" invalid type"<<endl;
	}
}

void Destroyer::save(std::string filename)
{
	SurfaceVessel::save(filename);

	std::ofstream file;
	file.open("savefile.txt",std::ios::app);


	file<<Destroyer::getPrimaryWeapon()<<"\n";
					
	file.close();


}
