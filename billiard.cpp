#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n],one=0,two=0,lead[n],W[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i]>>B[i];
		one+=A[i];
		two+=B[i];

		if(one>two)
		{
			W[i]=1;
			lead[i]=one-two;
		}
		else
		{
			W[i]=2;
			lead[i]=two-one;
		}
	}	
	int max=lead[0],a=0;
	for(int i=1;i<n;i++)
		if(lead[i]>max)
		{
			max=lead[i];
			a=i;
		}

	cout<<endl;
	cout<<W[a]<<" "<<max;
	
	return 0;
}