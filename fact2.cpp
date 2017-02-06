#include<iostream>
using namespace std;
int main()

{
	int t;
	cin>>t;
	cout<<endl;
	int F[150],A[t],B[t];
	for(int i=0;i<t;i++)
	{
		int m=0;
		cin>>B[i];
		A[i]=B[i];
		while(B[i]>0)
		{
			F[m]=B[i]%10;
			B[i]=B[i]/10;
			m++;
		}

		int k;
		while(A[i]>1)
		{
			A[i]--;
			int x,temp=0;
			for(k=0;k<m;k++)
			{
				x = (A[i])*F[k] + temp;
				F[k]=x%10;
				temp=x/10;
			}

			while(temp>0)
			{
				F[m]=temp%10;
				temp=temp/10;
				m++;
			}
		}

		for(int k=m-1;k>=0;k--)
			cout<<F[k];
		cout<<endl;
	}
}