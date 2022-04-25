//13. W.A.P. that will show the effect of reference variable.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{ 
	int a=10;
	float b=20;
	
	int &i = a;
	float &j = b;
	
	cout<<"Value of a"<<a<<endl;
	cout<<"Value of a reference"<<i<<endl;
	
	cout<<"Value of b"<<b<<endl;
	cout<<"Value of b reference"<<j<<endl;
	
	return 0; // The biggest advantage of Reference variable is New variable is not created for the reference
			  // so memory is saved.
}
