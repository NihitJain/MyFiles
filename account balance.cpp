#include<iostream>
#include<cstdlib>
using namespace std;
int main()

{
	int w;
    float B;
  
	cin>>w;	    
    cin>>B;
	if ((w%5==0)&&(B>(0.50+w)))
	{
	    B=B-w-0.50;
	    cout<<B;
	}
	else
	{
		cout<<B;
	}
	return 0;
}