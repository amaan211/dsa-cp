// find the largest sum contiguous sub array
// kadane's algorithm
// very very important
#include<bits/stdc++.h>
using namespace std;

int kadanes(int a[], int n)
{
	int maxeh =0; int maxsf=INT_MIN;
	for(int i=0; i<n; i++)
	{
		maxeh += a[i];
		maxsf =max(maxsf,maxeh);
		if(maxeh<0)
		{
			maxeh=0;
		}
	}
	return maxsf;
}

int main()
{
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	int n=8;
	int y=kadanes(a,n);
	cout<<y<<endl;
}