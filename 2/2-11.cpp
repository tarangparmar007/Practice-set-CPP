//11. W.A.P. to check the effect of dynamic initialization.

/*Dynamic initialization of an object refers to initializing 
the objects at a run time 
i.e., the initial value of an variable is done at the time of declaration of a variable .*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{ 
	float r=5;               // This is the Dynamic initiatization of radius(r) as it is already declared here
	
	float area = 3.14*r*r;   //This is the Dynamic initiatization of area
	
	cout<<"The area of the cirle is:"<<area;
	
	return 0;
}
