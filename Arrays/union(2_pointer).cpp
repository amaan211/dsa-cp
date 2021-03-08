// union of an 2 sorted arrays using pointer approach
#include<bits/stdc++.h>
using namespace std;

std::vector<int> uni(int a[], int n, int b[], int m)
{
	// solving using the 2 pointer method
	int i=0; int j=0;
	std::vector<int> v;

	while(i<n && j<m)
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

	while(i<n)    // push the rest of the elements that are left
	{
		v.push_back(a[i]);
		i++;
	}

	while(j<m)
	{
		v.push_back(b[j]);
		j++;
	}
	return v;
}


int main(void)
{
	int a[]={1,2,3,9,10};
	int n=5;
	int b[]={7,9,21,23,49,100};
	int m=6;
	vector<int> y=uni(a,n,b,m);

	for(auto it=y.begin(); it!=y.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}