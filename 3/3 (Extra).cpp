//Function overloading 

#include<iostream>
#include<iomanip>

using namespace std;

class A                            
{
		int n1, n2, sum, mul;
		public:
			
				void math()                          //created a function named math
				{
						cout<<"Enter two numbers: ";
						cin>>n1>>n2;
						sum=n1+n2;
						cout<<"sum= "<<sum<<endl;
				}
				void math(int a, int b)				//created a same function named math but this time arguments are present 
				{
						mul=a*b;
						cout<<"Multiplication= "<<mul<<endl;
				}
};
int main()
{
		A object;									//calling the class A with the object that is neccessary to add 
		object.math();
		object.math(2,3);
		
		return 0;
}
