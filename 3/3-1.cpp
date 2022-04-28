/*3-1.  WAP to print using default arguments
		repchar() -> Prints '*' 45 times
		repchar('=') -> Prints '=' 45 times
		repchar('+',30) -> Prints '+' 30 times*/
		
#include <iostream>

using namespace std;

class A
{
		public:                                       //by default class are private, so we gotta make em' public using this
			
			void repchar(char a = '*', int n = 45)
			{
	    			for(int i=0;i<n;i++)
	      			  cout <<i+1<<"-" << a << endl;
			}
};
int main()
{
	A obj;                                           
	
    obj.repchar();
    obj.repchar('=');
    obj.repchar('+', 30);

return 0;
}

