//15. Explain the working of scope resolution operator (::) with an example.

/* Its is used for 1)To access a global variable when there is a local variable with same name: 
                   2) To define a function outside a class.*/

#include<iostream>
#include<iomanip>

using namespace std;

int a=10; //Global variable

int main()
{ 
	
		int a=20; //Local variable
		
		cout<<"the value of local a:"<<a<<endl;
		cout<<"the value of global a:"<<::a<<endl; //using :: will refer to the global variable
		
	return 0;
}

