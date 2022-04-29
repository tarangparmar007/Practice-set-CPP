/* 4-1. Create a class player with the following data members 
		name, age, runs, hi, lo, tsts, avg. Write member 
		functions for each of the following:
		a. To get the data
		b. To display the data
		c. To calculate the average of the player*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class player
{
	char nm[20];
	int age, runs, hi, lo, tests;
	float avg;
	
	public:
	
	void getdata()
	{
		cout<<"Enter player details"<<endl;
		cout<<"Name:";
		cin>>nm;
		cout<<"Age:";
		cin>>age;
		cout<<"Runs:";
		cin>>runs;
		cout<<"High score:";
		cin>>hi;
		cout<<"Lowest score:";
		cin>>lo;
		cout<<"Tests:";
		cin>>tests;
	}
	
	void dispdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<"Name:"<<nm<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"Runs:"<<runs<<endl;
		cout<<"High score:"<<hi<<endl;
		cout<<"Lowest score:"<<lo<<endl;
		cout<<"Tests:"<<tests<<endl;
		cout<<"Average of the player is"<<(runs/tests);
	}
	
};
int main()
{
	player P1;
	P1.getdata();
	P1.dispdata();
	
	return 0;
}
