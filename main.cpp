#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void pi_count(double *total_count, double *incount);

int main()
{
	cout.setf(ios::fixed);
	cout.precision(5);
	double incount=0;
	double total=0;

	pi_count(&total, &incount);

	cout<<"total: "<<total<<"\tin: "<<incount<<endl;;

}



void pi_count(double *total_count, double *incount)
{
	cout<<*total_count<<*incount<<endl;
	for(double i=-1;i<=1;i+=0.1)
	{
		for(double j=-1;j<=1;j+=0.1)	
		{
			(*total_count)++;

			if((i*i+j*j)<=1)
			{
				(*incount)++;
			}
		}
	}

}
