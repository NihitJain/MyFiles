#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	int n;
	cin>>n;
	cout<<endl;
	if((n>0)&&(n<pow(10,5)))
	{
		unsigned long A[n],N;
		for(int i=0;i<n;i++)
		{
			cin>>N;
			if ((1<=N)&&(N<=pow(10,9)))
				A[i]=N;
			else
			{
				cout<<"invalid"<<endl;
				i--;
			}
		}
		cout<<endl;

		int zeroes[n];
		
		for(int i=0;i<n;i++)
		{
			int a=0;
			while(A[i]>0)
			{
				A[i]=A[i]/5;          //prime factor 5 f A[i] 
				a+=A[i];
			}
			zeroes[i]=a;
		}

		for(int i=0;i<n;i++)
			cout<<zeroes[i]<<endl;
	}
}