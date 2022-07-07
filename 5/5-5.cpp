/* 5. Create class complex with following data members
      real and imaginary, Use constructors and destructors properly
      and
      for performing various arithmetic operations
      write member functions for each of the
      following
      a. Addition function to add two complex no
      b. Subtraction function to add two complex no
      c. Multiplication function to add two complex no
      d. Division function to add two complex no
      e. Function to get data and to print data */

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


    void add(complex j, complex k)
    {
      real = j.real+k.real;
      image = j.image+k.image;
    }
    void sub(complex j, complex k)
    {
      real = j.real-k.real;
      image = j.image-k.image;
    }
/*    void multi(complex j, complex k)
    {
      real = j.real*k.real;
      image = j.image+k.image;
    }*/
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
    c3.add(c1,c2);
    c3.disp();
    cout<<"=================Subtraction===================="<<endl;
    c3.sub(c1,c2);
    c3.disp();

    return 0;


}
