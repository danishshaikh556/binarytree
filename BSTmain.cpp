#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>



#include <fstream>
#include <vector>
#include <string>
#include "BST.h"
using namespace std;





int main()
{
  BST<int> all;
	
	all.add(10);
	all.add(6);
	all.add(13);
	all.add(15);
	all.add(9);
	all.add(1);
	all.add(12);
	
	all.printinorder();
	all.printpreorder();
	all.printpostorder();



int aps;
cin>>aps;
return 1;
}


