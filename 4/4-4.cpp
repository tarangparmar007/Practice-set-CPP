/* 4-4. Create a time with following data members int h,m,s.
		Write member functions for each of the following:
		a. To get the data in number of seconds
		b. To set the data in number of seconds
		c. To display the data
		d. To convert seconds into h, m, s*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class time
{
	
	int  h,m,s;
	
	public:
	
	int getdata()
	{
		cout<<"Enter the time in seconds"<<endl;
		cin>>s;
	}
	
	int convertdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;
		
		h=0;
		m=0;
		for(;s>=60;++m)
		{
			
			s=s-60;
		}
		for(;m>=60;++h)
		{
			
			m=m-60;
		}
		
		cout<<"The time in the format of [hours:minutes:seconds] is"<<"["<<h<<":"<<m<<":"<<s<<"]";
	}
	

};
int main()
{
	time T1;
	T1.getdata();
	T1.convertdata();
	
	
	return 0;
}
