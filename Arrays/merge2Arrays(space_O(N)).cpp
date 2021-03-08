// merge two sorted arrays with O(1) extra space
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArr(int a[], int n, int b[], int m)
{
	// following the two pointer approach
	// this is the same as union of two sets 
	int i=0; int j=0;
	std::vector<int> v;

	while(i<n && j<m)
	{
		if(a[i]==a[i+1])
			i++;
		if(b[j]==b[j+1])
			j++;
		if(a[i]>b[j])
		{
			v.push_back(b[j]);
			j++;
		}
		else if(a[i]<b[j])
		{
			v.push_back(a[i]);
			i++;
		}
		else
		{
			v.push_back(a[i]);
			i++;
			j++;
		}
	}

	while(i<n) // putting in the rest of the elements
	{
		v.push_back(a[i]);
		i++;
	}
	while(j<m)
	{
		v.push_back(b[i]);
		j++;
	}
	return v;
}

int main(void)
{
	int a[]={1,2,7,8,9};
	int n=5;
	int b[]={4,5,6,7,8};
	int m=5;
	std::vector<int> y=mergeArr(a,n,b,m);
	for(auto it=y.begin(); it!=y.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}