#include<iostream>
using namespace std;
int main()

{
	int n;
	cout<<"integers in ascending order"<<endl;
	cout<<"number of digits u want to enter"<<endl;
	cin>>n; 

	int  A[n];
	cout<<"INPUT"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if((A[i]/100)>=1)
			{
				cout<<"not valid"<<endl;
				i--;
			} 
		if(A[i]<0)
			if((-A[i]/100)>=1)
			{
				cout<<"not valid"<<endl;
				i--;
			}
	}

	int B[n];
	int i=0;
	while (A[i] != 42,i<n)
	{
		B[i]=A[i];
		i++;
	}

	int temp;
	for(int j=0;j<i;j++)
	{
		for(int k=0;k<i-(j+1);k++)
			if (B[k]>B[k+1])
			{
				temp = B[k];
				B[k] = B[k+1];
				B[k+1] = temp;
			}
	}

	cout<<"OUTPUT"<<endl;
	for(int m=0;m<i;m++)
	{
		cout<<B[m]<<endl;
	}
	return 0;
}