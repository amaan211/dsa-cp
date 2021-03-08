// find the intersection of two given arrays
#include<bits/stdc++.h>
using namespace std;


vector<int> inter(int a[], int n, int b[], int m)
{
	// we will be doing this through 2 pointers
	int i=0; int j=0; 
	std::vector<int> v;

	while(i<n && j<m) // if we reach the end of either of the arrays, execution stops
	{
		if(a[i]==a[i+1])
		{
			i++;
		}
		if(b[j]==b[j+1])
		{
			j++;
		}
		if(a[i]>b[j])
		{
			j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			v.push_back(a[i]);
			i++;
			j++;
		}
	}
	return v;
}

int main(void)
{
	int a[]={1,2,3,4,5,6,7};
	int n = 7;
	int b[]={1,2,6,7};
	int m=4;
	vector <int> y=inter(a,n,b,m);

	for(auto it=y.begin(); it!=y.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;


}