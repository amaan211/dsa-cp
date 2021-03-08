//Find the Duplicate Number in array of size n+1 containing digits from a 1-n (inclusive)
#include<bits/stdc++.h>
using namespace std;

// i will be using the hashing method here which keeps the initial array intact but there is also sorting method and linked liste method
// which is very advanced for me to implement. lol.

int findDuplicate(int a[], int n)
{
	int temp[n];

	memset(temp,0,sizeof(temp));

	for(int i=0; i<n; i++)
	{
		if(temp[a[i]]==0)
		{
			temp[a[i]]++;	
		}
		else{
			return a[i];
		}
		
	}
	return -1;
}


int main()
{
	int n; cin>>n;

	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int y=findDuplicate(a,n);
	cout<<y<<endl;
}