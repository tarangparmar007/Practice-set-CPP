/*3-2. WAP to add two matrices using default argument.*/

#include<iostream>
#include<iomanip>

using namespace std;

void matrix(int r=2, int c=2)
			{
				int i,j,a[r][c],b[r][c];
				
				cout<<"Enter the Elements of Matrix A:\n";
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					cin>>a[i][j];
				}
				cout<<"Enter the Elements of Matrix B:";
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					cin>>b[i][j];
				}
				cout<<"The sum of matrix A and B="<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					cout<<a[i][j]+b[i][j]<<"";
					cout<<endl;
				}
			}	

int main()
{		
		int r,c;
		
   		cout << "Enter the size of matrix : ";
  		cin>>r>>c;
  		
		matrix(r,c);
		return 0;
}
