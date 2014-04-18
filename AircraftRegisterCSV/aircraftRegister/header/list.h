#ifndef LIST_H
#define LIST_H
#include <string>


//forward declaration
template <class anyType>
class LnNode;

//class definition
template <class anyType>
class LnLinkedList
{
public:
	//construction
	LnLinkedList();
	
	//add a new node to the last
	void addToList(anyType *data);
	
	//find an element in list and set current pointer
	//void find( anyType key);
	
	//get data from element pointed at by current pointer
	anyType* getCurrent(void);
	
	//delete element pointed at by current pointer
	void deleteCurrent(void);

	LnNode<anyType>* getBegin(void);

	//find an element in list and set current pointer
	void find(std::string ID);
	
	

	private:
	//data members
	
	LnNode<anyType> *_begin;		//pointer to first element in list
	LnNode<anyType> *_end;		//pointer to last element in list
	LnNode<anyType> *_current;	//pointer to current element in list
};

#endif