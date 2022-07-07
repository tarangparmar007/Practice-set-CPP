/*10. Create class string with the data member as char str[20],
Use constructors and destructors properly and
write member functions for each of thefollowing
l. To get the data
m. To display the data
n. To concatenate two string objects*/


      #include<iostream>
      #include<cstring>
      using namespace std;

      class strng
      {     private:

                    char str[20];

            public:

            void getdata()
            {
              cout<<"Enter the string"<<endl;
              cin>>str;
              cout<<endl;
            }

            void operator +(strng &obj)
            {
               strcat(str, obj.str);
            }

            void dispdata()
            {
              cout<<str<<endl;
            }
      };

      int main()
      {
            strng t1,t2,t;
            t1.getdata();
            t2.getdata();

            t1.dispdata();
            t2.dispdata();

            t1+t2;

            t1.dispdata();

            return 0;
      }
