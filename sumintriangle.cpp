#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
    	return b;
} 
int main()
{
	int n;
	cin>>n;
	int T[n],C[n];
	for(int i=0;i<n;i++)
	{
		cin>>T[i];
		int A[T[i]][T[i]];

		for(int m=0;m<T[i];m++)
		{
			int j;
			for( j=0;j<m+1;j++)
				cin>>A[m][j];
			for(int k=j;k<T[i];k++)
				A[m][k]=0;
		}

        for(int h=T[i]-2;h>=0;h--)
            for(int j=0;j<=h;j++)
                A[h][j]+=max(A[h+1][j],A[h+1][j+1]);

        C[i]=A[0][0];
	}
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<C[i]<<endl;
	return 0;
}
 


