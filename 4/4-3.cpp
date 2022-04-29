/* 4-3. Create a class book with following data members 
		bookname, authorname, rate, qty.
		Write member functions for each of the following:
		a. To get the data
		b. To display the data
		c. To calculate the total price of the book*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class book
{
	char bnm[20],anm[20];
	int  qty;
	float cost, total_price;
	
	public:
	
	void getdata()
	{
		cout<<"Enter Book details:"<<endl;
		cout<<"Book name:";
		cin>>bnm;
		cout<<"Author name:";
		cin>>anm;
		cout<<"Quantity:";
		cin>>qty;
		cout<<"Rate:";
		cin>>cost;
	}
	
	void dispdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<"Book name:"<<bnm<<endl;
		cout<<"Author name:"<<anm<<endl;
		cout<<"Quantity:"<<qty<<endl;
		cout<<"Rate:"<<cost<<endl;
		cout<<"Total cost is"<<(cost*qty);
	}
	
};
int main()
{
	book B1;
	B1.getdata();
	B1.dispdata();
	
	return 0;
}
