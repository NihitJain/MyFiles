#include<iostream>
using namespace std;
void swap(int v[], int i, int j)
{
     int temp;
     temp = v[j];
     v[j] = v[i];
     v[i] = temp;
}
void qsort(int v[], int s, int e)
{
    if ((e-s) <= 0)
    	return;

    int left = s, right = e;
    
    if ((e-s) ==1)
    {
        if (v[s] > v[e])             // There are only two numbers
            swap(v, left, right);   // swap v[left] and v[right]
        else
            return;
    }

    while (left < right)
    {
        // find a number less than left from right
        while (v[right] > v[left])
            right--; 

        if (left < right)
        {
            swap(v, left, right);   // swap v[left] and v[right]
            left++;
        }

        while (v[right] > v[left])
            left++;

        if (left < right)
        {
            swap(v, left, right);   // swap v[left] and v[right]   
            right--;
        }
	}   
    qsort(v, s, left-1);
    qsort(v, left+1, e);
}
int main()
{
    int n, i;
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];

    qsort(A,0,n-1);
    	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<A[i]<<endl;

	return 0;
}