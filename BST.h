#ifndef _BST_h
#define _BST_h
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>



#include <fstream>
#include <vector>
#include <string>
using namespace std;

template <typename elemtype>
class BST
{
public:
  BST();
	~BST();
	void add(elemtype val);
	void find(elemtype valu);
	void printinorder();
	void printpreorder();
	void printpostorder();
private:
	struct nodeT{
		elemtype key;
		nodeT *left,*right;
	};
	nodeT *root;
	void deletecompletelist(nodeT *t);
		void addnode(nodeT *&t,elemtype a);
	void inorder(nodeT *p);
	void preorder(nodeT *p);
	void postorder(nodeT *p);
	void findval(nodeT *y,elemtype j);
};

#include "BST.cpp"

#endif

