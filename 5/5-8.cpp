/*8.Create a class distance with the following data membersint feet,
	float inches
	Use constructors and destructors properly and write member
	functions for the following
	i. To get the data
	j. To display the data
	k. Add two distance objects*/

	#include<iostream>
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

		void getdata()
		{
			cout<<"Enter the Values for FEET n INCHES"<<endl;
			cin>>feet>>inches;
		}

		void dispdata()
		{
			cout<<"The distance in feet is:"<<feet<<endl<<"The distance in inches is:"<<inches<<endl;
		}
		//12inch=1feet
		void add(dist a1, dist a2)
		{
				feet=a1.feet+a2.feet;
				inches=a1.inches+a2.inches;

				for(int i=0;inches>=12;i++)
				{
					inches= inches-12;
					feet++;
				}
		}
		~dist(){}

	};

	int main()
	{
			dist d1,d2;
			d1.getdata();
			d2.getdata();

			cout<<"The addition of distance of 2 objects:"<<endl;

			dist a1;
			a1.add(d1,d2);
			a1.dispdata();

			return 0;
	}
