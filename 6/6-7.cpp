/*6-7.Write a program to compare two time class objects by overloading <, >, ==,!= operators
    Convert sec into  h,m,s*/

#include<iostream>

using namespace std;

class time
{
      private:
            int h,m,s,i;

      public:
            time()
            {
              h=0;
              m=0;
              s=0;
              i=0;
            }

            void get()
            {
                cout<<"Enter Time in Seconds"<<endl;
                cin>>i;
            }

            void convert()
            {
              m = i / 60;
              h = m / 60;
              s = i % 60;
              m = m % 60;
            }
            void disp()
            {
                cout<<"The time is :- ["<<h<<":"<<m<<":"<<s<<"]"<<endl;
            }

            void operator <(time a)
            {
                if(i < a.i)
                cout<<"Time1 is less than Time2"<<endl;
            }

            void operator >(time a)
            {
                if(i > a.i)
                cout<<"Time1 is Greater than Time2"<<endl;
            }

            void operator ==(time a)
            {
                if(i == a.i)
                cout<<"Time1 is equal to Time2"<<endl;
            }

            void operator !=(time a)
            {
                if(i != a.i)
                cout<<"Time1 is not equal Time2"<<endl;
            }
};
int main()
{
   time d1,d2;
   d1.get();
   d2.get();

   d1.convert();
   d2.convert();

   d1.disp();
   d2.disp();

   d1 < d2;
   d1 > d2;
   d1 == d2;
   d1 != d2;

   return 0;
}
