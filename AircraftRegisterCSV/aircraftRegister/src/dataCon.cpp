// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:

#include "../header/dataCon.h"
#include "../header/SSK.h"
#include "../header/SSB.h"
#include "../header/vessel.h"
#include "../header/tanker.h"
#include "../header/landingPlatformDock.h"
#include "../header/destroyer.h"
#include "../header/aircraftCarrier.h"
#include <iostream>
#include "../header/list.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <stdlib.h>
#include <random>
#include <time.h>
#include <cmath>
#define maxVessel 10000



template <class anyType>
DataCon<anyType>::DataCon()
{
_count=0;

}
template <class anyType>
DataCon<anyType>::~DataCon()
{

}


// add SSK vessel function 
template <class anyType>
void DataCon<anyType>::addSSK(std::string pVesselName,unsigned int pSignature,
								unsigned int pLength, unsigned int pMaxRange, 
								unsigned int pMaxSpeed, unsigned int pMaxDisp, 
								unsigned int pCrew,unsigned int pMaxDive,
								unsigned int pMaxSpeedSubmerge,unsigned int pDispSubmerge,
								unsigned int pNoTorpedo)
try
{
	unsigned int pVessType=1;
	
	_count++;
	if (getCount()<maxVessel) //to check if reach maximum vessel
		{
			std::cout<<"adding Submarine SSK"<<std::endl;
			SSK *data=new SSK( pVesselName,pSignature,
							   pLength, pMaxRange, 
							   pMaxSpeed, pMaxDisp, 
							   pCrew,pVessType,
							   pMaxDive,pMaxSpeedSubmerge,
							   pDispSubmerge,pNoTorpedo);

			_dataList.addToList(data);
			
			std::cout<<"input succesful"<<std::endl;
			std::cout<<getCount()<<std::endl;
		}
	else
	{
	_count--;// to previous count
	throw 0; 
	
	}
}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}
catch (std::bad_alloc& ba)
{
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
}

// add SSB vessel function
template <class anyType>
void DataCon<anyType>::addSSB(std::string pVesselName,unsigned int pSignature,
				                   unsigned int pLength, unsigned int pMaxRange, 
								   unsigned int pMaxSpeed, unsigned int pMaxDisp, 
								   unsigned int pCrew,unsigned int pMaxDive,
								   unsigned int pMaxSpeedSubmerge,unsigned int pDispSubmerge,
								   unsigned int pTotalSLBM)
try
{
	unsigned int pVessType=2;
	
	_count++;//add vessel count for maxVessel check
	if (getCount()<maxVessel)//to check if reach maximum vessel
	{
	std::cout<<"adding Submarine SSB"<<std::endl;
	SSB *data=new SSB(pVesselName,pSignature,
					  pLength,   pMaxRange, 
					  pMaxSpeed, pMaxDisp, 
	                  pCrew,     pVessType,
					  pMaxDive,pMaxSpeedSubmerge,
					  pDispSubmerge,pTotalSLBM);
	
	_dataList.addToList(data);
	
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	}
	else
	{
	_count--;// to previous count
	throw 0;
	}
	

}
catch (int err)
{
	std::cout<<"error code "<<err<<" cannot add data "<<std::endl;
}
catch (std::bad_alloc& ba)
{
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
}


//add tanker function
template <class anyType>
void DataCon<anyType>::addTanker(std::string pVesselName,unsigned int pSignature,
								unsigned int pLength, unsigned int pMaxRange, 
								unsigned int pMaxSpeed, unsigned int pMaxDisp, 
								unsigned int pCrew,unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,unsigned int pStorageCapacity)
try
{
	_count++;
	if (getCount()<maxVessel)//to check if reach maximum vessel
	{
	unsigned int pVessType=3;
	std::cout<<"adding Tanker"<<std::endl;
	Tanker *data=new Tanker( pVesselName,pSignature,
							 pLength,    pMaxRange, 
							 pMaxSpeed,  pMaxDisp, 
							 pCrew,      pVessType,
							 pNoOfHelicopter,pDeckSpace,
							 pStorageCapacity);
	
	_dataList.addToList(data);
	
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	}
	else
	{
	_count--;// to previous count
	throw 0;
	}

}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}
catch (std::bad_alloc& ba)
{
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
}

//add landing platform dock function
template <class anyType>
void DataCon<anyType>::addLanding(std::string pVesselName,unsigned int pSignature,
								unsigned int pLength, unsigned int pMaxRange, 
								unsigned int pMaxSpeed, unsigned int pMaxDisp, 
								unsigned int pCrew,unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,unsigned int pStorageCapacity,
								unsigned int pNoOfAircraft)

try
{
	_count++;
	if (getCount()<maxVessel)//to check if reach maximum vessel
	{
	unsigned int pVessType=4;
	std::cout<<"adding Landing Platform Dock"<<std::endl;
	LandingPlatformDock *data=new LandingPlatformDock( pVesselName,pSignature,
							                           pLength,  pMaxRange, 
													   pMaxSpeed, pMaxDisp, 
													   pCrew, pVessType,
													   pNoOfHelicopter, pDeckSpace,
													   pStorageCapacity, pNoOfAircraft);
	
	_dataList.addToList(data);
	
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	}
	else
	{
	_count--;// to previous count
	throw 0;
	}

}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}

//add Detroyer vessel function
template <class anyType>
void DataCon<anyType>::addDestroyer(std::string pVesselName,unsigned int pSignature,
								    unsigned int pLength, unsigned int pMaxRange, 
								    unsigned int pMaxSpeed, unsigned int pMaxDisp, 
								    unsigned int pCrew,unsigned int pNoOfHelicopter,
								    unsigned int pPrimaryWeapon)
try
{
	_count++;
	if(getCount()<maxVessel)//to check if reach maximum vessel
	{
	unsigned int pVessType=6;
	std::cout<<"adding Destroyer"<<std::endl;
	Destroyer *data=new Destroyer( pVesselName,pSignature,
							       pLength, pMaxRange, 
							       pMaxSpeed, pMaxDisp, 
							       pCrew,pVessType,pNoOfHelicopter,
								   pPrimaryWeapon);
	
	_dataList.addToList(data);

	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	}
	else
	{
	_count--;// to previous count
	throw 0;
	}
}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}
catch (std::bad_alloc& ba)
{
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
}

//add Aircraft carrier function
template <class anyType>
void DataCon<anyType>::addAirCarrier(std::string pVesselName,unsigned int pSignature,
										unsigned int pLength, unsigned int pMaxRange, 
										unsigned int pMaxSpeed, unsigned int pMaxDisp, 
										unsigned int pCrew,unsigned int pNoOfHelicopter,
										unsigned int pNoOfAircraft)

try
{
	_count++;
	if (getCount()<maxVessel)//to check if reach maximum vessel
	{
	unsigned int pVessType=5;
	std::cout<<"adding AircraftCarrier"<<std::endl;
	AircraftCarrier *data=new AircraftCarrier( pVesselName,pSignature,
							                   pLength, pMaxRange, 
											   pMaxSpeed, pMaxDisp, 
											   pCrew,pVessType,
											   pNoOfHelicopter,pNoOfAircraft);
	
	_dataList.addToList(data);

	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	}
	else
	{
	_count--;// to previous count
	throw 0;
	}

}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}
catch (std::bad_alloc& ba)
{
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
}


//browse function
template <class anyType>
void DataCon<anyType>::showVessel()
try
{
	if (getCount()>0&&getCount()<maxVessel)// check if vessel data available
	{
			LnNode<anyType> *current = NULL;
			current =_dataList.getBegin();	// Set current to head of list
			anyType *data;
			int start=0;// previous limiter
			int browseCount=0;// for broswsing page
			char input;
			
			while (current != NULL)
			{	
				browseCount++;
				data = current->getData();
				data->display();
				
				do
				{		
					std::cout<<"please enter previous (p) or next(n) or exit(x)"<<std::endl;
					std::cin>>input;
					if (input=='n')// show the next vessel
					{
					browseCount++;
							if (browseCount<=getCount())
							{
							std::cout<<browseCount<<std::endl;
							current = current->getNextNode();//Get next node
							data = current->getData();
							data->display();//display data
							}
							else
							{
							browseCount--;
							std::cout<<"reach end of data"<<std::endl;
							}
					}
					else if (input=='p')// show the previous vessel
					{
					browseCount--;
							if (browseCount>start)
							{
							std::cout<<browseCount<<std::endl;
							current = current->getPrevNode();//get previous node
							data = current->getData();
							data->display();//display data
							}
							else
							{
							browseCount++;
							std::cout<<"reach end of data"<<std::endl;
							}
						
					}
					else if(input=='x')
					{
					current = NULL;
					}
					else
					{
					std::cout<<"invalid input"<<std::endl;
					}
				}
				while (input!='x');
			}
	}
	else
	{
	throw 1;
	}

}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}

template<class anyType>
void DataCon<anyType>::deleteVessel(std::string pID)
try
{
	if (getCount()>0&&getCount()<maxVessel)// check if vessel data available
	{
		_dataList.find(pID);
		_dataList.deleteCurrent();
		
		_count--;
	}
	else
	{
	throw 2;
	}


}
catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}


template <class anyType>
void DataCon<anyType>::findVessel(std::string pID)
try
{
	if (getCount()>0)// check if vessel data available
	{
			anyType *data;
			_dataList.find(pID);
			data=_dataList.getCurrent();
			
			if (data!=NULL)
			{
			data->display();
			}
			else
			{
			std::cout<<"data not found"<<std::endl;
			}
	}
	else
	{
	throw 3;
	}
	

}

catch (int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}





template <class anyType> 
void DataCon<anyType>::save()
try
{
		if (getCount()>0)// check if vessel data available
		{
				LnNode<anyType> *current = NULL;
				current =_dataList.getBegin();	// Set current to head of list
				anyType *data;

			

				std::ofstream file;
				file.open("savefile.txt",std::ios::trunc);
				file<<"";
				file.close();
	
				while (current != NULL)
				{
					data = current->getData();
					data->save();
					current = current->getNextNode();		//Get next node
				}
		
		}
		else
		{
		throw 4;
		}

		
}
catch(int err)
{
	std::cout<<"error code "<<err<<std::endl;
}




template <class anyType> 
int DataCon<anyType>::getCount()
{

	return _count;
}


template <class anyType> 
 void DataCon<anyType>::load(std::string filename)
try
{
	  
	std::vector <std::string> vectline;
	std::string line;
	bool checkVector=false;
	std::ifstream myfile (filename.c_str());
	
	if(myfile.is_open())
	{ 
		while (!myfile.eof())
		{
		myfile>>line;
				
				
		vectline.push_back(line);// store the data in vector
				
				
		}
		myfile.close();
	}
	else
	{
	std::cout<<"unable to open the file"<<std::endl;
	}	
		

	if (checkVector==vectline.empty()) //check vector is empty or not
	{
		for (unsigned int start=0;start<vectline.size()-1;start++)
		{
		std::string sentence;
		sentence=vectline[start];

		std::string gpmcheck=sentence;	
		std::size_t found=gpmcheck.find_first_of(',');
		std::string check;
		if (found!=std::string::npos)
		for (unsigned int i=0; i<found;++i)
				{
						
					check=check+gpmcheck[i];
						
				}
		
		
					
			if (check=="$1")//to perform check type  vessel from file
			{
				loadSSB(sentence);		
			
			}
			else if (check=="$2")//to perform check type  vessel from file
			{
					
				loadSSK(sentence);
			}	
			else if (check=="$3")//to perform check type  vessel from file
			{
				loadTanker(sentence);
			}
			else if (check=="$4")//to perform check type  vessel from file
			{
				loadLanding(sentence);
			}
			else if (check=="$5")//to perform check type  vessel from file
			{
				loadAirCarrier(sentence);
			}
			else if (check=="$6")//to perform check type  vessel from file
			{
				loadDestroyer(sentence);
			}
		}
		vectline.clear(); //clear all the data inside vector
		std::cout<<"loaded"<<std::endl;
	}
	else
	{
	throw 300;
	}
	
}
 catch(int err)
{
	std::cout<<"error code "<<err<<std::endl;
}



/*
template <class anyType> 
void DataCon<anyType>::bubbleSort()
{
      
if (getCount()>0)
{
	LnNode<anyType> *current = NULL;
	LnNode<anyType> *Next = NULL;
	current =_dataList.getBegin();	// Set current to head of list
	anyType *firstData;
	anyType *secondData;
	bool swapped = true;
	int j = 0;
	anyType *tmp;




      while (swapped) 
	  {
            swapped = false;
            j++;
            for (int i = 0; i < getCount() - j; i++) 
			{

				   
				
					firstData = current->getData();
					Next = current->getNextNode();
					if (Next!=NULL)
					{
					secondData = Next->getData();

				
						if (firstData->getSignature() > secondData->getSignature()) 
						{
							tmp = firstData;
							firstData =secondData;
							secondData = tmp;
						
							swapped = true;
							std::cout<<"swapped"<<std::endl;
						}
						current = current->getNextNode();
					}
					else
					{
					std::cout<<"sorted"<<std::endl;
					}
				}
					
				
			
	  
	   }
}
else
	{
	std::cout<<"no data inside"<<std::endl;
	}
}
*/
template <class anyType> 
void DataCon<anyType>::loadSSB(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pMaxDive,pMaxSpeedSubmerge,
	pDispSubmerge,pTotalSLBM;
					
					
					
	for (unsigned int i=0; i<line.size();++i)
			{
				if (line[i]==','||line[i]=='$')
				{
				line[i]=' ';
				}
				std::istringstream in(line);
								
				in>>pVessType>>pSignature>>pVesselName>>pLength
				>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pMaxDive
				>>pMaxSpeedSubmerge>>pDispSubmerge>>pTotalSLBM;
					
								
			}

					
			//convert all string into unsigned int				
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	MaxDive=std::stoul(pMaxDive);
			unsigned int	MaxSpeedSubmerge=std::stoul(pMaxSpeedSubmerge);
			unsigned int	DispSubmerge=std::stoul(pDispSubmerge);
			unsigned int	TotalSLBM=std::stoul(pTotalSLBM);

			DataCon::addSSB(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 MaxDive,
						 MaxSpeedSubmerge,
						 DispSubmerge,
						 TotalSLBM);	


}

template <class anyType> 
void DataCon<anyType>::loadSSK(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pMaxDive,pMaxSpeedSubmerge,
	pDispSubmerge,pTorpedo;
					
					
					
	for (unsigned int i=0; i<line.size();++i)
			{
				if (line[i]==','||line[i]=='$')
				{
				line[i]=' ';
				}
				std::istringstream in(line);
								
				in>>pVessType>>pSignature>>pVesselName>>pLength
				>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pMaxDive
				>>pMaxSpeedSubmerge>>pDispSubmerge>>pTorpedo;
					
								
			}

					
			//convert all string into unsigned int				
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	MaxDive=std::stoul(pMaxDive);
			unsigned int	MaxSpeedSubmerge=std::stoul(pMaxSpeedSubmerge);
			unsigned int	DispSubmerge=std::stoul(pDispSubmerge);
			unsigned int	NoOfTorpedo=std::stoul(pTorpedo);

			DataCon::addSSK(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 MaxDive,
						 MaxSpeedSubmerge,
						 DispSubmerge,
						 NoOfTorpedo);
}

template <class anyType> 
void DataCon<anyType>::loadTanker(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pNoOfHelicopter,
	pDeckSpace,pStorageCapacity;
					
					
	for (unsigned int i=0; i<line.size();++i)
			{
				if (line[i]==','||line[i]=='$')
				{
				line[i]=' ';
				}
				std::istringstream in(line);
								
				in>>pVessType>>pSignature>>pVesselName>>pLength
				>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pVessType>>pNoOfHelicopter
				>>pDeckSpace>>pStorageCapacity;
					
								
			}

							
			//convert all string into unsigned int				
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	NoOfHelicopter=std::stoul(pNoOfHelicopter);
			unsigned int    DeckSpace=std::stoul(pDeckSpace);
			unsigned int	StorageCapacity=std::stoul(pStorageCapacity);

			DataCon::addTanker(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 NoOfHelicopter,
						 DeckSpace,
						 StorageCapacity);
}

template <class anyType> 
void DataCon<anyType>::loadLanding(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pNoOfHelicopter,
	pDeckSpace,pStorageCapacity,pNoOfAircraft;
					
					
	for (unsigned int i=0; i<line.size();++i)
			{
				if (line[i]==','||line[i]=='$')
				{
				line[i]=' ';
				}
				std::istringstream in(line);
								
				in>>pVessType>>pSignature>>pVesselName>>pLength
				>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pNoOfHelicopter
				>>pDeckSpace>>pStorageCapacity>>pNoOfAircraft;
					
								
			}

							
			//convert all string into unsigned int				
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	NoOfHelicopter=std::stoul(pNoOfHelicopter);
			unsigned int    DeckSpace=std::stoul(pDeckSpace);
			unsigned int	StorageCapacity=std::stoul(pStorageCapacity);
			unsigned int	NoOfAircraft=std::stoul(pNoOfAircraft);

			DataCon::addLanding(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 NoOfHelicopter,
						 DeckSpace,
						 StorageCapacity,
						 NoOfAircraft);
}

template <class anyType> 
void DataCon<anyType>::loadAirCarrier(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pNoOfHelicopter,
	pNoOfAircraft;
					
					
	for (unsigned int i=0; i<line.size();++i)
	{
		if (line[i]==','||line[i]=='$')
		{
		line[i]=' ';
		}
		std::istringstream in(line);
								
		in>>pVessType>>pSignature>>pVesselName>>pLength
		>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pNoOfHelicopter
		>>pNoOfAircraft;
					
								
	}

							
			//convert all string into unsigned int				
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	NoOfHelicopter=std::stoul(pNoOfHelicopter);
			unsigned int	NoOfAircraft=std::stoul(pNoOfAircraft);

			DataCon::addAirCarrier(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 NoOfHelicopter,
						 NoOfAircraft);
}

template <class anyType> 
void DataCon<anyType>::loadDestroyer(std::string line)
{
	std::string pVesselName;
	std::string pSignature,pLength,pMaxRange,
	pMaxSpeed,pMaxDisp,pCrew,pVessType,pNoOfHelicopter,
	pPrimaryWeapon;
					
					
	for (unsigned int i=0; i<line.size();++i)
	{
		if (line[i]==','||line[i]=='$')
		{
		line[i]=' ';
		}
		std::istringstream in(line);
								
		in>>pVessType>>pSignature>>pVesselName>>pLength
		>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pNoOfHelicopter
		>>pPrimaryWeapon;
											
	}

							
			//convert all string into unsigned int		
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	NoOfHelicopter=std::stoul(pNoOfHelicopter);
			
			unsigned int	PrimaryWeapon=std::stoul(pPrimaryWeapon);

			DataCon::addDestroyer(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 NoOfHelicopter,
						 PrimaryWeapon);
}


template <class anyType> 
void DataCon<anyType>::observe()

try
{
  if (getCount()>0)
  {

  float maxDiff=199.96;//maximum difference between 1 to 9999
  int randVess;
  float diffPer=0;
  
  anyType *result = NULL;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate  number between 1 and 9999: */
  randVess = rand() % 9999 + 1;
  
  std::cout<<"random vessel signature"<<randVess<<std::endl;

			LnNode<anyType> *current = NULL;
			current =_dataList.getBegin();	// Set current to head of list
			anyType *data;
	
			while (current != NULL)
			{
				data = current->getData();
				unsigned int signature=data->getSignature();// get the signature
				
				diffPer=compare(randVess,signature);// compare the signature with random generated signature

				if (diffPer<=maxDiff)
				{
				maxDiff=diffPer;
				result=current->getData();
				
				}

				current = current->getNextNode();		//Get next node
			}
	std::cout<<"percentage difference : "<<maxDiff<<"%"<<std::endl;
	result->display();
  }
  else
  {
  throw 9;
  }

}
catch(int err)
{
	std::cout<<"error code "<<err<<" no data inside"<<std::endl;
}

template <class anyType> 
float DataCon<anyType>::compare(float pRandVes,float pVessel)
{

	
	float diff;
	float avg;
	float result;
	diff=pRandVes-pVessel;
	avg	=(pRandVes+pVessel)/2;
	
	result=diff/avg;

	result=result*100;
	
	

	return std::abs(result);// return modulus result

}
