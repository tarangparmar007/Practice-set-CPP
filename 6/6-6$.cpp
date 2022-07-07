/*6-6. Write a program to compare two date class objects by
overloading <, >, ==,!= operators.*/

#include<iostream>
#include<cstring>
using namespace std;

class date
{
      private:
            int d,m,y;

      public:
            date()
            {
              d=0;
              m=0;
              y=0;
            }

            void get()
            {
                cout<<"Enter date in d:m:y format"<<endl;
                cin>>d>>m>>y;
            }

            void disp()
            {
                cout<<"The date is :-"<<d<<":"<<m<<":"<<y<<endl;
            }

            void operator <(date a)
            {
                if(date< a.feet)
                cout<<"Date1 is less than Date2"<<endl;
            }

            void operator >(dist a)
            {
                if(feet > a.feet)
                cout<<"Distance1 is Greater than Distance 2"<<endl;
            }

            void operator ==(dist a)
            {
                if(feet == a.feet && inches == a.inches)
                cout<<"Distance1 is same as Distance 2"<<endl;
            }

            void operator !=(dist a)
            {
                if(feet != a.feet)
                cout<<"Distance1 is not as same as Distance 2"<<endl;
            }
};
int main()
{
   dist d1,d2;
   d1.get();
   d2.get();

   d1.disp();
   d2.disp();

   d1 < d2;
   d1 > d2;
   d1 == d2;
   d1 != d2;

   return 0;
}
