/* 7-1. WAP to convert from ton to Kg & gms and vice-versa. Create
two classes for the same. Class tons (with ton as data member)
and Class kilo (with kg and gms as data members)Use formula
1 ton = 1000 kg, 1kg = 1000gms */

#include<iostream>
#include<iomanip>
using namespace std;

class kilo;
class tons
{
     double ton;

     public:
     tons()
     {
          ton=0;
     }
     friend class kilo;
     void get()
     {
       cout<<"Enter the value in tons:";
       cin>>ton;
     }
     void display()
     {
       cout<<"-------------------------------"<<endl;
       cout<<"Values in tons:"<<ton<<endl;
       cout<<"-------------------------------"<<endl;
     }
};

class kilo
{
     double kg, gm;

     public:
            friend class tons;
            kilo(tons a)
            {
                kg=a.ton*1000;
                gm=a.ton*1000000;
            }
            void get()
            {
              cout<<"Enter the values in KG:";
              cin>>kg;
              cout<<"Enter the values in GMS:";
              cin>>gm;
            }
            void display()
            {
              cout<<"-------------------------------"<<endl;
              cout<<"VALUES IN KILOGRAM :"<<kg<<endl<<"VALUES IN GRAM :"<<gm<<endl;
              cout<<"-------------------------------"<<endl;
            }
            void conversion(tons t)
            {
                t.ton=(kg/1000);
                t.display();

            }

};
int main()
{
    tons t;
    t.get();
    kilo k=t;
    k.display();
    k.get();
    k.conversion(t);

    return 0;
}
