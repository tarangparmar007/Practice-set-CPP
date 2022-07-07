/*6-5.Create a class distance with following data members(1feet=12inches)
  int feet
  float inches
  write an overloaded operators <, >, ==, != two compare two distance objects.*/
  #include<iostream>
  #include<cstring>
  using namespace std;

  class dist
  {
        private:
              int feet;
              float inches;
        public:
              dist()
              {
                feet=0;
                inches=0.0;
              }

              void get()
              {
                  cout<<"Enter values of Feet and inches"<<endl;
                  cin>>feet>>inches;
                  while(inches >= 12)
                  {
                      inches = inches - 12;
                      feet++;
                  }
              }

              void disp()
              {
                  cout<<"Distance after conversion: "<<feet<<" feet "<<inches<<" inches "<<endl;
              }

              void operator <(dist a)
              {
                  if(feet < a.feet)
                  cout<<"Distance1 is smaller than Distance 2"<<endl;
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
