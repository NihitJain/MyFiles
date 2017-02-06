#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int A[n],flag=1;
		for(int k=0;k<n;k++)
           cin>>A[k];

        for(int m=0;m<n;m++)
        	if(A[A[m]-1]!=m+1)
        	{
        		flag=0;
        		cout<<"not ambiguous"<<endl;
        		break;
        	}
        	if(flag==1)
        		cout<<"ambiguous"<<endl;
        	cin>>n;
	}
	return 0;
}