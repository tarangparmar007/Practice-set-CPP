/*6-1. Rewrite complex class (from assignment 5) using operator
overloading concept. i.e. overload (+,-,*,/)*/

#include<iostream>
using namespace std;

class complex
{
    float real, image;
    public:

          complex()
          {
            real=0.0;
            image=0.0;
          }

    void get()
    {
      cout<<"Enter the real number"<<endl;
      cin>>real;
      cout<<"Enter the image number"<<endl;
      cin>>image;
    }
    void disp()
    {
      cout<<real<<"+"<<image<<"i"<<endl;
    }


    complex operator +(complex k)
    {
      complex j;
      j.real = real+k.real;
      j.image = image+k.image;
      return j;
    }
    complex operator -(complex k)
    {
      complex j;
      j.real = real-k.real;
      j.image = image-k.image;
      return j;
    }
    complex operator *( complex k)
    {
      complex j;
      j.real=(real * k.real) - (image * k.image);
      j.image =(image * k.real) + (real * k.image);
      return j;
    }
    complex operator / (complex k)
    {
        complex j;
        j.real=(real*j.real+image*j.image)/(j.real*j.real+j.image*j.image);
        j.image=(j.real*j.real-j.image*j.image)/(j.real*j.real+j.image*j.image);
        return j;
    }
    ~complex()
    {
      real=0.0;
      image=0.0;
    }

};
int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    cout<<"=================ADDITION===================="<<endl;
    c3= c1+c2;
    c3.disp();
    cout<<"=================SUBTRACTION===================="<<endl;
    c3= c1-c2;
    c3.disp();
    cout<<"=================MULTIPLICATION===================="<<endl;
    c3= c1*c2;
    c3.disp();
    cout<<"=================DIVISION===================="<<endl;
    c3= c1/c2;
    c3.disp();

    return 0;


}
