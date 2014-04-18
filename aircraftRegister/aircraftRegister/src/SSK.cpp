// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description :
#include "../header/SSK.h"
#include <iostream>
#include <fstream>
using namespace std;

unsigned int _noOfTorpedo;

unsigned int getNoTorpedo();

SSK::SSK()
{

}

SSK::SSK(std::string pVesselName, 
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
		 unsigned int pNoTorpedo)
	 
{
	setSubmarine(pVesselName,
				 pSignature,
				 pLength, 
				 pMaxRange, 
				 pMaxSpeed, 
				 pMaxDisp, 
				 pCrew,
				 pVessType,
				 pMaxDive,
				 pMaxSpeedSubmerge,
				 pDispSubmerge);
	
	_noOfTorpedo=pNoTorpedo;

}

SSK::~SSK()
{

}


void SSK::setNoTorpedo(int pNoTorpedo)
{
_noOfTorpedo=pNoTorpedo;

}

unsigned int SSK::getNoTorpedo()
{
return _noOfTorpedo;

}

void SSK::display()
{
	Submarine::display();
	cout<<"No of torpedo : "<<SSK::getNoTorpedo()<<endl;

}

void SSK::save()
{
	Submarine::save();
	std::ofstream file;
	file.open("savefile.xml",std::ios::app);

	file<<"\t\t\t<Notorpedo>"<<SSK::getNoTorpedo()<<"</Notorpedo>\n"
	<<"\t\t</signature>\n"
	<<"\t</vessel>\n";	
		std::cout<<"save succesful"<<std::endl;	
	file.close();


}