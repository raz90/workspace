// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include<iostream>
using namespace std;
#include "dataCon.cpp"
#include "../header/SSK.h"
#include "../header/SSB.h"
#include "../header/vessel.h"

void menu();
void addVessel(DataCon<Vessel>&vess);
void deleteVessel(DataCon<Vessel>&vess);
void browseVessel(DataCon<Vessel>&vess);
void searchVessel(DataCon<Vessel>&vess);
void SSKMenu(DataCon<Vessel>&vess);
void SSBMenu(DataCon<Vessel>&vess);
void landingPlatMenu(DataCon<Vessel>&vess);
void tankerMenu(DataCon<Vessel>&vess);
void aircraftCarMenu(DataCon<Vessel>&vess);
void destroyerMenu(DataCon<Vessel>&vess);


int main(int argc, char **argv)
{	
	int choice;

	DataCon<Vessel> vess;

	do
	{
		menu();
		cout<<"Option: ";
		cin>>choice;
		cout<<endl;
		
			if (cin.good())
			{
				
				

				if (choice==0)
				{
					cout<<"Good Bye Exiting.."<<endl;
				}
				else if (choice==1)
				{
					addVessel(vess);
				}
				else if (choice==2)
				{
					deleteVessel(vess);
				}
				else if (choice==3)
				{
					searchVessel(vess);
				}
				else if (choice==4)
				{
					vess.load("savefile.txt");
				}
				else if (choice==5)
				{
					vess.save();
				}
				else if (choice==6)
				{
					browseVessel(vess);
				}
				else if (choice==7)
				{
					vess.observe();
				}
			}
			else
			{
			std::cout<<"invalid input"<<endl;
			cin.clear();
			cin.ignore();
			}

	}while(choice!=0);

	
	return 0;
} 

void menu()
{
	cout<<"Welcome to the Military Vesels automated identification system"<<endl;
		cout<<"***************************************************************"<<endl;
		cout<<"MENU"<<endl;
		cout<<"1. Add Vessel"<<endl;
		cout<<"2. Delete Vessel"<<endl;
		cout<<"3. Search Vessel"<<endl;
		cout<<"4. Load"<<endl;
		cout<<"5. Save"<<endl;
		cout<<"6. Browse"<<endl;
		cout<<"7. Observe"<<endl;
		cout<<"0. Exit"<<endl;
}



void addVessel(DataCon<Vessel>&vess)
{
	
	
	int choose;

	do
	{
		cout<<"Chose Vessel type to add"<<endl;
		cout<<"_________________________"<<endl;
		cout<<"1. Add SSK"<<endl;
		cout<<"2. Add SSB"<<endl;
		cout<<"3. Add Tanker"<<endl;
		cout<<"4. Add Landing Platform Dock"<<endl;
		cout<<"5. Add Aircraft Carrier"<<endl;
		cout<<"6. Add Destroyer"<<endl;
		cout<<"0. Exit "<<endl;
		cout<<"Option: "<<endl;
		cin>>choose;
		cout<<endl;
		
			if (cin.good())
			{
				
				

				if (choose==0)
				{
					cout<<"Good Bye Exiting.."<<endl;
				}
				else if (choose==1)
				{
					SSKMenu(vess);
				}
				else if (choose==2)
				{
					SSBMenu(vess);
				}
				else if (choose==3)
				{
					tankerMenu(vess);
				}
				else if (choose==4)
				{
					landingPlatMenu(vess);
				}
				else if (choose==5)
				{
					aircraftCarMenu(vess);
				}
				else if (choose==6)
				{
					destroyerMenu(vess);
				}
				
			}
			else
			{
			std::cout<<"invalid input"<<endl;
			cin.clear();
			cin.ignore();
			
			}

	}while(choose!=0);



}

void deleteVessel(DataCon<Vessel> & vess)
{	
	bool check=false;
	int pSignature;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())//to check if the input is interget or not
		{
			if(pSignature>0&&pSignature<10000)// to check if the signature is within range
			{
				vess.deleteVessel(pSignature);
				check=true;
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

}

void browseVessel(DataCon<Vessel> &vess)
{
	vess.showVessel();
}

void searchVessel(DataCon<Vessel> &vess)
{
	
	vess.findVessel();

}



void SSKMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pMaxDive; 
	unsigned int pMaxSpeedSubmerge; 
	unsigned int pDispSubmerge;
	unsigned int pNoTorpedo;


	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;

	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++) //to check if the any space in the between input
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())//to check if the input is interget or not
		{
			if(pSignature>0&&pSignature<10000)// to check if the signature is within range
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the Maximum dive speed : ";
		cin>>pMaxDive;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	check=false;
	do
	{
		cout<<"please enter the maximum speed submerge : ";
		cin>>pMaxSpeedSubmerge;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the Displacement submerge : ";
		cin>>pDispSubmerge;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	check=false;
	do
	{
		cout<<"please enter the no of torpedo : ";
		cin>>pNoTorpedo;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

			vess.addSSK(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pMaxDive,
						 pMaxSpeedSubmerge,
						 pDispSubmerge,
						 pNoTorpedo);

}


void SSBMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pMaxDive; 
	unsigned int pMaxSpeedSubmerge; 
	unsigned int pDispSubmerge;
	unsigned int pSLBM;

	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;
	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++)
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())
		{
			if(pSignature>0&&pSignature<10000)
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	

	check=false;
	do
	{
		cout<<"please enter the Maximum dive speed : ";
	    cin>>pMaxDive;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	

	check=false;
	do
	{
		cout<<"please enter the maximum speed submerge : ";
	    cin>>pMaxSpeedSubmerge;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	

	check=false;
	do
	{
		cout<<"please enter the Displacement submerge : ";
	    cin>>pDispSubmerge;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	check=false;
	do
	{
		cout<<"please enter the no of SLBM : ";
	    cin>>pSLBM;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

			vess.addSSB(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pMaxDive,
						 pMaxSpeedSubmerge,
						 pDispSubmerge,
						 pSLBM);

}

void landingPlatMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pNoOfHelicopter; 
	unsigned int pDeckSpace; 
	unsigned int pStorageCapacity;
	unsigned int pNoOfAircraft;

	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;
	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++)
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())
		{
			if(pSignature>0&&pSignature<10000)
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	check=false;
	do
	{
		cout<<"please enter the No of Helicopter : ";
	    cin>>pNoOfHelicopter;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	

	check=false;
	do
	{
		cout<<"please enter the Deck Space : ";
	    cin>>pDeckSpace;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	
	check=false;
	do
	{
		cout<<"please enter the storage capacity : ";
		cin>>pStorageCapacity;

		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	check=false;
	do
	{
		cout<<"please enter the no of Aircraft : ";
	    cin>>pNoOfAircraft;

		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);



		vess.addLanding(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pNoOfHelicopter,
						 pDeckSpace,
						 pStorageCapacity,
						 pNoOfAircraft);

}

void tankerMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pNoOfHelicopter; 
	unsigned int pDeckSpace; 
	unsigned int pStorageCapacity;

	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;
	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++)
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())
		{
			if(pSignature>0&&pSignature<10000)
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	check=false;
	do
	{
		cout<<"please enter the No of Helicopter : ";
	    cin>>pNoOfHelicopter;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	
	check=false;
	do
	{
		cout<<"please enter the Deck Space : ";
	    cin>>pDeckSpace;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	

	check=false;
	do
	{
		cout<<"please enter the storage capacity : ";
	    cin>>pStorageCapacity;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	




		vess.addTanker(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pNoOfHelicopter,
						 pDeckSpace,
						 pStorageCapacity);

}

void aircraftCarMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pNoOfHelicopter; 
	unsigned int pNoOfAircraft;

	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;
	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++)
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())
		{
			if(pSignature>0&&pSignature<10000)
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	check=false;
	do
	{
		cout<<"please enter the No of Helicopter : ";
		cin>>pNoOfHelicopter;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	
	
	check=false;
	do
	{
		cout<<"please enter the no Aircraft : ";
	    cin>>pNoOfAircraft;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	vess.addAirCarrier(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pNoOfHelicopter,
						 pNoOfAircraft);

}

void destroyerMenu(DataCon<Vessel> &vess)
{
	string pVesselName;
	unsigned int pSignature;
	unsigned int pLength; 
	unsigned int pMaxRange; 
	unsigned int pMaxSpeed; 
	unsigned int pMaxDisp; 
	unsigned int pCrew;
	unsigned int pNoOfHelicopter; 
	unsigned int pPrimaryWeapon;

	cin.clear();
	cin.ignore();
	cin.sync();
	bool check=false;
	do
	{
		cout<<"please enter the vessel Name : ";
		getline(cin,pVesselName);
		for(unsigned int j=0;j<pVesselName.size();j++)
		{
			if(pVesselName[j]==' ')
			{
			cout<<"it has space please put underscore "<<endl;
			check=false;
			break;
			}
			else
			{
			check=true;
			}
			
		}
		
	cin.clear();
	cin.sync();	
	}while(check!=true);
	


    check=false;
	do
	{
		cout<<"please enter the vessel signature : ";
		cin>>pSignature;
		if(cin.good())
		{
			if(pSignature>0&&pSignature<10000)
			{
				if (vess.checkSignature(pSignature)==true)
				{
					check=true;
				}
			}
			else
			{
			cout<<"out of range"<<endl;
			}
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);


	
	
    check=false;
	do
	{
		cout<<"please enter the vessel Length : ";
		cin>>pLength;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the maximum range : ";
		cin>>pMaxRange;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		

	check=false;
	do
	{
		cout<<"please enter the maximum speed : ";
		cin>>pMaxSpeed;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
		
	check=false;
	do
	{
		cout<<"please enter the maximum Displacement : ";
		cin>>pMaxDisp;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	check=false;
	do
	{
		cout<<"please enter the crew number : ";
		cin>>pCrew;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	check=false;
	do
	{
		cout<<"please enter the No of Helicopter : ";
	    cin>>pNoOfHelicopter;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);
	
	

	check=false;
	do
	{
		cout<<"please enter the Primary Weapon : ";
		cout<<"1.Gun Type"<<endl;
		cout<<"2.Guided missile  Type"<<endl;
		cin>>pPrimaryWeapon;
		if(cin.good())
		{
		check=true;
		}
		else
		{
		cout<<"is not digit"<<endl;
		
		}
		cin.clear();
		cin.ignore();
		cin.sync();
		
	}while(check!=true);

	
	vess.addDestroyer(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pNoOfHelicopter,
						 pPrimaryWeapon);

}



