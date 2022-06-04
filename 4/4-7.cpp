/*4-7. Write a program to count number of objects created for any
class.*/

#include<iostream>

using namespace std;

class object
{
	public:
		   static int count;
		   object()
		   {
		   		count++;
		   }
};
int object::count;
int main()
{	int n=4;
	object ob[n];
	cout<<object::count;
}
