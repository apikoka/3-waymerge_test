#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(5);
	double incount=0;
	double total=0;
	for(double i=-1;i<=1;i+=0.01)
	{
		for(double j=-1;j<=1;j+=0.01)	
		{
			total++;

			if((i*i+j*j)<=1)
			{
				incount++;
			}
		}
	}

	cout<<"total: "<<total<<"\tin: "<<incount<<endl;;

}