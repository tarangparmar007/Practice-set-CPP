/* 4-7. Write a program to count number of objects created for any
		class.*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class obj 
{
	public :
			
			static int count;
			obj()
			{
					count++;
			}
	

};
int obj::count;
int main()
{
 	int n;
    cout<<"Enter number of data's "<<endl;
    cin>>n;
    object c[n];
    cout<<"The object created is "<<endl;
    cout<<object::count;
	
	return 0;
}
