// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include <iostream>
#include <fstream>
using namespace std;

#include "../header/SSB.h"


unsigned int _totalSLBM;

unsigned int getTotalSLBM();

SSB::SSB()
{

}

SSB::SSB(std::string pVesselName,
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
		unsigned int pTotalSLBM)

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
	
	_totalSLBM=pTotalSLBM;


}

 SSB::~SSB()
{

}

void SSB::setTotalSLBM(int pTotalSLBM)
 {
	 _totalSLBM=pTotalSLBM;

}

unsigned int SSB::getTotalSLBM()
 {

	 return _totalSLBM;
 }

 void SSB::display()
 {	
	 
	 Submarine::display();
	  
	 cout<< "Total SLBM :" << getTotalSLBM() << endl;
 }

 void SSB::save()
 {
 std::ofstream file;
	
	
	Submarine::save();
	file.open("savefile.txt",std::ios::app);

	file<<SSB::getTotalSLBM()<<"\n";	
	file.close();
	std::cout<<"save succesful"<<std::endl;
 }