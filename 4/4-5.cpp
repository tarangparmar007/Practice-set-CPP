/* 4-5. Create a student with the following data members rollno, 
		name, marks[6],per, class.
		Write member functions for each of the following
		a. To get the data
		b. To display the data
		c. To calculate percentage
		d. To calculate class based on percentage	*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class student
{
	
	char nm[20];
	int roll;
	float marks[6],sum, percent, std;
	
	
	public:
	
	int getdata()
	{
		cout<<"Enter the name of the student"<<endl;
		cin>>nm;
		cout<<"Enter the roll"<<endl;
		cin>>roll;
		cout<<"Enter the marks out of 100"<<endl;
		sum=0;
		for(int n=0;n<6;n++)
		{
			cin>>marks[n];
			sum=sum+marks[n];
		}
	}
	
	int dispdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;
		
		cout<<"The name of the student is:"<<nm<<endl;
		cout<<"of std:                    "<<std<<endl;
		cout<<"roll number:               "<<roll<<endl;
		cout<<"percentage:                "<<(sum/600)*100<<endl;
		
		percent=((sum/600)*100);
		if(percent>80&&percent<100)
			cout<<"Passed with first class";
			
		else if(percent>60&&percent<80)
			cout<<"Passed with second class";
		
		else if(percent>40&&percent<60)
			cout<<"Passed with third class";
			
		else
			cout<<"fail";
	}
	

};
int main()
{
	student S1;
	S1.getdata();
	S1.dispdata();
	
	
	return 0;
}
