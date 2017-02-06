#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	int t;
	cin>>t;
	cout<<endl;
	int A[t];
		
		for(int i=0;i<t;i++)
			cin>>A[i];
	
	int temp;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<(t-(i+1));j++)
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
	}
	
	cout<<endl;
	for(int i=0;i<t;i++)
		cout<<A[i]<<endl;

}