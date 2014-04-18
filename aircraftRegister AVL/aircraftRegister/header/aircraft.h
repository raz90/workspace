#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft 
{
protected:
	unsigned int _noOfAircraft;
	
public:
	

	//constructor
	Aircraft();

	Aircraft(unsigned int pNoOfAircraft);

	//destructor
	~Aircraft();

	//setter
	void SetAircraft (unsigned int pNoOfAircraft);

	//getter
	unsigned int getNoOfAircraft();
	
	//friend class decleration
	friend class LandingPlatformDock;
	friend class AircraftCarrier;
	

};
#endif