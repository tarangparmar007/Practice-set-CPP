/*3-6. WA function power() to raise a number m to power n. The 
	function takes a double value for m and int value for n, and 
	returns the value (results) correctly. Use default argument 2 
	for n and m to make a function to calculate squares when 
	argument is not passed. WAP for the same.*/ 
	
#include<iostream>
#include<iomanip>

using namespace std;

double power(double m, int n=2)
	{
		int i,result;
		result=m;
		for(i=0;i<n-1;i++)
		{
			result*=m;
			
		}
		
		return result;
	}


int main()
{	
	int b;
	char ans;
	double a;
	
	cout<<"Enter the base:";
	cin>>a;
	
	cout<<"do you want to change the power?[y/n]"<<endl;
	cin>>ans;
	if(ans=='y')
	{
		cout<<"Enter the value of the power:";
		cin>>b;
		cout<<power(a,b)<<"This is the answer";
	}
	else
	{
		cout<<"the answer is"<<power(a);
	}
	
}
