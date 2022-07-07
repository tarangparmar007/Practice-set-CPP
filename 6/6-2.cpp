/*6-2. Rewrite matrix class (from assignment 5) using operator
overloading concept. i.e. overload (+,-,*,/)*/

#include<iostream>
using namespace std;

class matrix
{
      int arr[10][10],i,j;
      public:
      matrix()
      {
          for (int i=0; i<3; i++)
          {
            for(int j=0; j<3; j++)
            arr[i][j]=0;
          }

      }

      void getdata()
      {
        cout<<"Enter matrix"<<endl;
        for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          {
            cin>>arr[i][j];
          }
        }
      }

    void showdata()
    {
      cout<<"The matrix is:"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
    }

    matrix operator +(matrix a)
    {
      matrix b;
      int n=3;
      cout<<"The Addition of matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          b.arr[i][j] = arr[i][j]+a.arr[i][j];
        }
        cout<<endl;
      }
      return b;
    }

    matrix operator -(matrix a)
    {
      matrix b;
      int n=3;
      cout<<"The Subtraction of matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          b.arr[i][j] = arr[i][j]-a.arr[i][j];
        }
          cout<<endl;
      }
      return b;
    }

    matrix operator *(matrix a)
    {
      matrix b;
      int n=3;
      cout<<"The Multiplication of matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          for(int k=0; k<n; k++)
          {
              b.arr[i][j] = arr[i][j]*a.arr[i][j];
          }
        }
        cout<<endl;
      }
      return b;
   }

   matrix operator /(matrix a)
   {
        matrix b;
        int n=3;
       cout<<"The Division of matrix is:"<<endl;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
              b.arr[i][j] = arr[i][j]/a.arr[i][j];
           }
       cout<<endl;
      }
     return b;
  }
};
int main()
{
    matrix x,y;
    x.getdata();
    y.getdata();

    x.showdata();
    y.showdata();

    matrix t;
    t=x+y;
    t.showdata();
    t=x-y;
    t.showdata();
    t=x*y;
    t.showdata();
    t=x/y;
    t.showdata();


    return 0;
}
