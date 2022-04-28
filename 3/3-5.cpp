/*3-5.	WAP that prints a character on screen using function 
		overloading*/ 
	
#include<iostream>
#include<iomanip>

using namespace std;

void ch(char a)
	{
		cout<<a<<" ";
	}

void ch(char b, char c)
	{
		cout<<b<<" "<<c<<endl;
	}

int main()
{
	ch('q');
	ch('w','e');
	
	return 0;
}
