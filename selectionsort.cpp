#include<iostream>
using namespace std;
void sort(long int A[],long int t)
{

	long int small,pos,temp;
	for(int i=0;i<t;i++)
	{
		int flag=0;
		small=A[i];
		for(int j=i+1;j<t;j++)
			if( A[j]<small )
			{
				small=A[j];
				pos=j;
				flag=1;
			}

		if(flag==1)
		{
			temp=A[i];
			A[i]=small;
			A[pos]=temp;
		}
	}
}

int main()
{
	long int t;
	cin>>t;
	long int A[t];

	for(int i=0;i<t;i++)
		cin>>A[i];

	sort( A,t);
	cout<<endl;
	for(int i=0;i<t;i++)
		cout<<A[i]<<endl;
	return 0;
}