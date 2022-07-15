/* 2. Create a class time 12 that store hh:mm:ss in 12 hour format
along with am or pm, createanother class time24 that store
time hh:mm:ss in 24 hour format. Write a Conversion function
to convert from one class object to another class object.*/

#include<iostream>
#include<iomanip>
using namespace std;
class time12
{
    private:
            int hh,mm,ss;
    public:
            time12()
            {
                hh=0;
                mm=0;
                ss=0;
            }
            void getdata()
            {
                cout<<"ENTER HOUR =";
                cin>>hh;
                cout<<"ENTER MINUTE =";
                cin>>mm;
                cout<<"ENTER SECONDS =";
                cin>>ss;
            }
            void show12()
            {
                int am;
                am=hh;
                if(hh>=12)
                {
                    hh-=12;
                }
                cout<<"TIME :"<<hh<<":"<<mm<<":"<<ss<<" ";
                if(am >= 12)
                {
                    cout<<"PM"<<endl;
                }
                else
                {
                    cout<<"AM"<<endl;
                }

            }
            int gethh()
            {
                return hh;
            }
            int getmm()
            {
                return mm;
            }
            int getss()
            {
                return ss;
            }
            ~time12()
            {
                // Destructor is called.
            }
};
class time24
{
    private:
            int hh1,mm1,ss1;
    public:
            time24 (time12 t1)
            {
                //Constructer is called.
                hh1=t1.gethh();
                mm1=t1.getmm();
                ss1=t1.getss();
            }
            void show24()
            {

                cout<<"TIME :"<<hh1<<":"<<mm1<<":"<<ss1<<" ";

            }
            ~time24()
            {
                 // Destructor is called.
            }

};
int main()
{
    class time12 t1;
    t1.getdata();
    time24 t = t1;
    cout<<"------- TIME IN 12 -------"<<endl;
    t1.show12();
    cout<<"------- TIME IN 24 -------"<<endl;
    t.show24();
    cout<<endl;
    return 0;
}
