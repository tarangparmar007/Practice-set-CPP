/*6.  Create class matrix with following data members
      int array[size][size] (size can vary), Use
      constructors and destructors properly and for
      performing various arithmetic operations write
      member functions for each of thefollowing
      a. Addition function to add two matrices
      b. Subtraction function to add two matrices
      c. Multiplication function to add two matrices
      d. Division function to add two matrices
      e. Function to get data and to print data*/

#include<iostream>
using namespace std;

class matrix
{
      int arr[10][10],i,j;
    public:
      matrix()
      {i=0;
       j=0;
        }

      void getdata(int n)
      {
        cout<<"Enter matrix"<<endl;
        for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          { cin>>arr[i][j]; }
        }
      }

    void showdata(int n)
    {
      cout<<"The matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        { cout<<arr[i][j]<<" "; }
        cout<<endl;
      }
    }

    void add(matrix m[], int n)
    {
      cout<<"The Addition of matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        { cout<<m[0].arr[i][j]+m[1].arr[i][j]<<" ";}
          cout<<endl;
      }
    }

    void sub(matrix m[], int n)
    {
      cout<<"The Subtraction of matrix is:"<<endl;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        { cout<<m[0].arr[i][j]-m[1].arr[i][j]<<" "; }
          cout<<endl;
      }
    }

    void multi(matrix m[], int n)
    {  int mul;

      cout<<"The Multiplication of matrix is:"<<endl;
      for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          {
            for( int k=0;k<n;k++)
            {
              mul += m[0].arr[i][j]  *  m[1].arr[i][j];
            }
            cout<<mul<<" ";
            mul=0;
          }
        }
        cout<<endl;
  }
};
int main()
{
    int n;
    cout<<"enter the size of matrix"<<endl;
    cin>>n;

    matrix m[2];
    for(int i=0;i<2;i++)
    {
        m[i].getdata(n);
    }
    for(int i=0;i<2;i++)
    {
        m[i].showdata(n);
    }

    matrix t;
    t.add(m,n);
    t.sub(m,n);
    t.multi(m,n);


    return 0;
}
