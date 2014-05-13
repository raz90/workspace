#ifndef DATACON_H
#define DATACON_H
#include <string>
#include "list.cpp"


template <class anyType>
class LnLinkedList;

template <class anyType>
class DataCon
{


public:
	//constructor
	DataCon();

	void load(std::string filename);

	//destrucotr
	~DataCon();
	
	//insert data
	void addSSK(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pMaxDive,
		unsigned int pMaxSpeedSubmerge,
		unsigned int pDispSubmerge,
		unsigned int pNoTorpedo);

	void addSSB(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pMaxDive,
		unsigned int pMaxSpeedSubmerge,
		unsigned int pDispSubmerge,
		unsigned int pTotalSLBM);

	void addTanker(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pNoOfHelicopter,
		unsigned int pDeckSpace,
		unsigned int pStorageCapacity);

	void addLanding(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity,
								unsigned int pNoOfAircraft);

	void addDestroyer(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pNoOfHelicopter,
								unsigned int pPrimaryWeapon);

	void addAirCarrier(std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pNoOfHelicopter,
						unsigned int pNoOfAircraft);
	
	//browsing

	void showVessel();

	//to delete data using id
	void deleteVessel(int pSignature);

	//to find data 
	void findVessel();

	

	void save();

	int getCount();

	void loadSSB(std::string sentence);

	void loadSSK(std::string sentence);

	void loadTanker(std::string sentence);

	void loadLanding(std::string sentence);

	void loadAirCarrier(std::string sentence);

	void loadDestroyer(std::string sentence);

	void observe();

	float compare(float randVessel,float vessel);

	bool checkSignature(int pSignature);
	



private:
	int _count;
	
	LnLinkedList<anyType> _dataList;

};

#endif