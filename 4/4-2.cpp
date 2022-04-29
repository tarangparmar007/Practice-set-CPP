/* 4-2. Create a class item with the following data members item 
		code, cost, qty, total_price. Write member functions for
		each of the following:
		a. To get the data
		b. To display the data
		c. To calculate the total price of the item*/
		
#include<iostream>
#include<iomanip>

using namespace std;

class item
{
	char item[20];
	int code, qty;
	float cost, total_price;
	
	public:
	
	void getdata()
	{
		cout<<"Enter Item details"<<endl;
		cout<<"Item:";
		cin>>item;
		cout<<"Code:";
		cin>>code;
		cout<<"Quantity:";
		cin>>qty;
		cout<<"Rate:";
		cin>>cost;
	}
	
	void dispdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<"Item:"<<item<<endl;
		cout<<"Code:"<<code<<endl;
		cout<<"Quantity:"<<qty<<endl;
		cout<<"Rate:"<<cost<<endl;
		cout<<"Total cost is"<<(cost*qty);
	}
	
};
int main()
{
	item I1;
	I1.getdata();
	I1.dispdata();
	
	return 0;
}
