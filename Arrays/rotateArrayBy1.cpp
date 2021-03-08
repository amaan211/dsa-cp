// cyclically roatate an array by one
// ez
#include<bits/stdc++.h>
using namespace std;

void rotate(int a[], int n)
{
	int temp=a[0];
	for(int i=0; i<n-1; i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}


int main(void)
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	rotate(a,n);
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}