/*6-4. Create class string with following data member
     char str[20], for performing various comparison operations
     overload >, <, ==, !=
     operators for two string objects.*/

#include<iostream>
#include<string.h>

using namespace std;

class strng
{
  string str;
  public:

  strng()
  {
    str=" ";
  }

  void get()
  {
    cout<<"Enter a string:";
    getline(cin,str);
  }

  void display()
  {
    cout<<"The string is:";
    cout<<str;
  }

  void operator >(strng j)
  {
        if( str > j.str)
        {
          cout<<"string one is greater"<<endl;
        }
  }

  void operator <(strng j)
  {
        if( str < j.str)
        {
          cout<<"string one is small"<<endl;
        }
  }

  void operator ==(strng j)
  {
        if( str == j.str)
        {
          cout<<"Both the strings are equal"<<endl;
        }
  }

  void operator !=(strng j)
  {
        if( str != j.str)
        {
          cout<<"Both the strings are unequal"<<endl;
        }
  }
  ~strng()
  {}
};
  int main()
  {
    strng s1, s2, s;
    s1.get();
    s2.get();

      s1>s2;
      s1<s2;
      s1==s2;
      s1!=s2;

    return 0;
  }
