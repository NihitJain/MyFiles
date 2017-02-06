#include<iostream>
#include<cmath>
using namespace std;
int main()


{
	int n,k;
	cin>>n>>k;
	cout<<endl;
	if(n<pow(10,7)&&k<pow(10,7))
	{
		int A[n],a=0;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if (a<pow(10,9))
			{
				A[i]=a;
			}
			else
			{
				i--;
			}
		}
		for(int i=0;i<n;i++)
			if(A[i]%k==0)
				a++;
			cout<<endl;
			cout<<a;
	}
	else 
	{
		cout<<" both of them should be less than"<<pow(10,7)<<endl;
	}
	return 0;
}