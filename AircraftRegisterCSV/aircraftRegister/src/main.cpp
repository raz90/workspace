// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:




#include "dataCon.cpp"
#include "../header/SSK.h"
#include "../header/SSB.h"
#include "../header/vessel.h"

int main(int argc, char **argv)

{	
	
	DataCon<Vessel> sub1;
	
	
	//sub1.addSSB("katak",10,3,4,5,6,7,1,9,10,11,12);
	//sub1.addSSK("hello",40,3,4,5,6,7,2,9,10,11,12);
	//sub1.addSSK("10",1,3,4,5,6,7,2,9,10,11,12);
	//sub1.addSSK("apo",2,3,4,5,6,7,2,9,10,11,12);
	//sub1.addTanker("tangki",2,3,4,5,7,8,3,0,12,13);
	//sub1.addLanding("landing",2,3,4,5,6,5,4,9,10,11,12);
	//sub1.addAirCarrier("carry",2,3,4,5,6,7,5,9,0);
	//sub1.addDestroyer("destroy",2,3,4,5,6,7,6,9,10);

	//sub1.showVessel();
	//sub1.deleteVessel("katak");
	//sub1.findVessel("katak");
	//sub1.bubbleSort();
	//sub1.showVessel();
	//sub1.save();
	sub1.load("savefile.txt");
	sub1.showVessel();
	

		
	
	
	return 0;
} 