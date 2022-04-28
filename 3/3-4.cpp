/*3-4. 	WAP that prints various types of data using function 
		overloading.*/

#include <iostream>

using namespace std;


void display(int var) 										// function with int type single parameter				
{
    cout << "Integer number: " << var << endl;
}

//------------------------------------------------------------
														
void display(double var) 									// function with double type single parameter				
{
    cout << "Double number: " << var << endl;
}

//------------------------------------------------------------
														
void display(int var1, double var2) 						// function with 2 parameters
{
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

int main() {

    int a = 1;
    double b = 1.5;

    // call function with int type parameter
    display(a);

    // call function with double type parameter
    display(b);

    // call function with 2 parameters
    display(a, b);

    return 0;
}
