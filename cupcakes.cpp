#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if ((t>=1)&&(t<=1000))
	{
		long int A[t];
		for(int i=0;i<t;i++)
		{
			long int a;
			cin>>a;
			if((a>=2)&&(a<=pow(10,8)))
				A[i]=a;
			else
				i--;
		}

	long int B[t];
	for(int i=0;i<t;i++)
		B[i]=(A[i]/2)+1;
	for(int i=0;i<t;i++)
		cout<<B[i]<<endl;
	}
	else
		cout<<"number of cases should be between 1 and 1000 including both";

	return 0;
}