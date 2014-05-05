#include <iostream>
#include <exception>
#include "../header/list.h"
#include <string>
#include "../header/vessel.h"



#define  NOT_IN_LIST "not in the list"

//class definition
template <class anyType>
class LnNode
{
public:
	//construction and destruction
	LnNode();
	~LnNode();
	
	//to set and get the next node in the list
	void setNextNode(LnNode *next);
	LnNode* getNextNode(void);
	
	//to set and get the previous node in the list
	void setPrevNode(LnNode *next);
	LnNode* getPrevNode(void);
	
	//to set and access data hold in node
	void setData(anyType *data);
	anyType* getData(void);
	
	private:
	//data members
	LnNode *_next;	//pointer to next node in list
	LnNode *_prev;	//pointer to previous node in list
	anyType  *_data;	//pointer to data hold in node
}; 

template <class anyType>
LnNode<anyType>::LnNode()
{
    //initialise the next and previous node pointers
	_next = NULL;
	_prev = NULL;
	
	//initialise the data pointer
	_data = NULL;
}

template <class anyType>
LnNode<anyType>::~LnNode()
{
	//delete data that is hold in node
	delete _data;
} 

template <class  anyType>
void LnNode<anyType>::setNextNode(LnNode *ptr)
{
	//next node pointer points to new location
	_next = ptr;
}

template <class  anyType>
LnNode<anyType>* LnNode<anyType>::getNextNode(void)
{
	//return pointer to next node
	return _next;
} 

template <class  anyType>
void LnNode<anyType>::setPrevNode(LnNode *ptr)
{
	//previous node pointer points to new location
	_prev = ptr;
}

template <class  anyType>
LnNode<anyType>* LnNode<anyType>::getPrevNode(void)

	
{
	//return pointer to previous node
	return _prev;
}
	




template <class  anyType>
void LnNode<anyType>::setData(anyType *ptr)
{
	//data pointer points to new location
	_data = ptr;
}

template <class  anyType>
anyType* LnNode<anyType>::getData(void)
{
	//return pointer to data location
	
	return _data;
}
template <class  anyType>
LnLinkedList<anyType>::LnLinkedList()
{
	//initialise node pointers
	_begin = NULL;
	_end = NULL;
	_current = NULL;
}
template <class  anyType>
void LnLinkedList<anyType>::addToList(anyType *data)
{
	LnNode<anyType> *newNodePtr;
	
	//craete new instance of LnNode
	newNodePtr = new LnNode<anyType>;
	
	//set data
	newNodePtr->setData(data);
	
	//check if list is empty
	
	if( _begin == NULL) 
	{
		_begin = newNodePtr;
	}
	else
	{
		
		newNodePtr->setPrevNode(_end);
		_end->setNextNode(newNodePtr);
	}
	
	//set current pointer end end pointer
	_end = newNodePtr;
	_current = newNodePtr;
} 
template <class  anyType>
anyType* LnLinkedList<anyType>::getCurrent(void)
{
	if(_current != NULL)
	{
		return _current->getData();
	}
	else
	{
		return NULL;
		//throw std::exception(NOT_IN_LIST);
	}
}



template <class  anyType>
void LnLinkedList<anyType>::deleteCurrent(void)

try
{
	LnNode<anyType> *nodeToDelete =_current;
	// If node to be deleted is head node
  if(_current == _begin)
  {
   _begin=_current->getNextNode();
  }
  // if node to be deleted is tail noe
  if(_current ==_end)
  {
    _end=_current->getPrevNode();
  }
  // Change prev only if node to be deleted is NOT the first node
 
	if(_current != NULL )
	{
		
		if (_current->getPrevNode() !=NULL)
		{
		_current->getPrevNode()->setNextNode(_current->getNextNode());
		}
		if (_current->getNextNode() !=NULL)
		{
		_current->getNextNode()->setPrevNode(_current->getPrevNode());
		}

		_current = _current->getPrevNode();

		delete nodeToDelete;
		nodeToDelete = NULL;
		std::cout<<"delete Succesfull"<<std::endl;
	}
	else
	{
		throw 20;
	}
} 
catch(int err)
{
	std::cout<<"error code "<<err<<" Not in list"<<std::endl;

}


template <class  anyType>
LnNode<anyType>* LnLinkedList<anyType>::getBegin(void)
{
	if(_begin != NULL)
	{

		return _begin;
	}
throw std::exception(NOT_IN_LIST);

}

template <class  anyType>
void LnLinkedList<anyType>::find(std::string ID)
{

anyType *ship;
LnNode<anyType> *node;

node=_begin;

while(node != NULL )
	{
		ship= node->getData();
		if(ship->getVesselName()== ID)
		{
			_current=node;
			return;
		}
		node = node->getNextNode();
	}
	
	_current = NULL;
	
//throw std::exception(NOT_IN_LIST);

}
