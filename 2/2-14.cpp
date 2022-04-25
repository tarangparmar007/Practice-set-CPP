/*14. WA function using variables as arguments to swap the values of a pair of integers using call 
		by value, call by address and call by reference*/
		
#include<iostream>
#include<iomanip>

using namespace std;


void swap( int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
	cout<<"Values of a and b after swapping:"<<endl;
	cout<<a<<endl<<b<<endl;
}

void swapref( int &a, int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
	cout<<"Values of a and b after swapping ref:"<<endl;
	cout<<a<<endl<<b<<endl;
}


int main()
{
	int i,j;
	
	cout<<"enter the value of a and b"<<endl;
	cin>>i>>j;
	
	swap(i,j);
	swapref(i,j);
		
	return 0;
}

