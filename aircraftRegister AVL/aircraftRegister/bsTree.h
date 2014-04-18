#include<cctype>
#include <stdlib.h>
#include <conio.h>

using namespace std;


template <class anyType>
struct node
{
	anyType element;
	node<anyType> *left;
	node<anyType> *right;
	anyType height;
};

template <class anyType>
typedef struct node<anyType> *nodeptr;

template <class anyType>
class bstree
{
	public:
		void insert(int,nodeptr &);
		void del(int, nodeptr &);
		int deletemin(nodeptr &);
		void find(int,nodeptr &);
		nodeptr findmin(nodeptr);
		nodeptr findmax(nodeptr);
		void makeempty(nodeptr &);
		void copy(nodeptr &,nodeptr &);
		nodeptr nodecopy(nodeptr &);
		void preorder(nodeptr);
		void inorder(nodeptr);
		void postorder(nodeptr);
		int bsheight(nodeptr);
		nodeptr srl(nodeptr &);
		nodeptr drl(nodeptr &);
		nodeptr srr(nodeptr &);
		nodeptr drr(nodeptr &);
		int max(int,int);
		int nonodes(nodeptr);
};


