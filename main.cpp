#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void pi_count(double *total_count, double *incount);

int main()
{
	cout.setf(ios::fixed);
	cout.precision(10);
	double incount=0;
	double total=0;

	pi_count(&total, &incount);

	cout<<"total: "<<total<<"\tin: "<<incount<<endl;;

}



void pi_count(double *total_count, double *incount)
{
	cout<<*total_count<<*incount<<endl;
	for(double i=-5;i<=5;i+=0.0001)
	{
		for(double j=-5;j<=5;j+=0.0001)	
		{
			(*total_count)++;

			if((i*i+j*j)<=100)
			{
				(*incount)++;
			}
		}
	}

}
