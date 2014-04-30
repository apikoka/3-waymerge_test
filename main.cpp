#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(10);
	double incount=0;
	double total=0;
	for(double i=-5;i<=5;i+=0.0001)
	{
		for(double j=-5;j<=5;j+=0.0001)	
		{
			total++;

			if((i*i+j*j)<=100)
			{
				incount++;
			}
		}
	}

	cout<<"total: "<<total<<"\tin: "<<incount<<endl;;

}
