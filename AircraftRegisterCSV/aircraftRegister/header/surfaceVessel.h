#ifndef SURFACEVES_H
#define SURFACEVES_H
#include "vessel.h"


class SurfaceVessel : public Vessel
{
protected :
		unsigned int _noOfHelicopter;
		
public	:
		//constructor
		SurfaceVessel();
		SurfaceVessel(std::string pVesselName,
					unsigned int pSignature,
					unsigned int pLength, 
					unsigned int pMaxRange, 
					unsigned int pMaxSpeed, 
					unsigned int pMaxDisp, 
					unsigned int pCrew,
					unsigned int pType,
					unsigned int pNoOfHelicopter);

		//destructor
		~SurfaceVessel();

		//setter
		void setSurfaceVessel(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter);
		//getter
		unsigned int getNoHelicopter();

		virtual void display();

		virtual void save();
};

#endif 