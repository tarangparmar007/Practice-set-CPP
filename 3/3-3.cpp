/*3-3.  WA function called zerosmaller() uses two arguments. Use 
		return by reference to the function concept and set a smaller 
		value to 0.*/
			
#include<iostream>
#include<iomanip>

using namespace std;

int& zerosmaller(int &a, int &b)
{
		if(a<b)
			return a; 				
		else
			return b;
}
int main()
{		
	int x,y;
	
	cout<<"Enter two number :"<<endl;
	cin>>x>>y;
	zerosmaller(x,y)=0;
	cout<<"New numbers are:"<<x<<" "<<y<<endl;	
		
	return 0;
}
