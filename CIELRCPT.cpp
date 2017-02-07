#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if((t>=1)&&(t<=5))
	{
		int A[t],C[t];
		for(int i=0;i<t;i++)
		{
			int a;
			cin>>a;
			if((a>=1)&&(a<=pow(10,5)))
				A[i]=a;
		}

		int P[12];
		for(int i=0;i<12;i++)
			P[i]=pow(2,i);

		
		for(int i=0;i<t;i++)
			{
				int a=0;
				start: while(A[i]>0)
					        for(int k=0;k<12;k++)
						        if((A[i]/P[k]<1)||(k==11))
						        {
						        	if(A[i]>=P[11])
							        	A[i]=A[i]-P[11];
							    	else
						    			A[i]=A[i]-P[k-1];
							        a++;
							        goto start;
						        }
				C[i]=a;
			}

		for(int m=0;m<t;m++)
			cout<<C[m]<<endl;
	}
	return 0;
}
