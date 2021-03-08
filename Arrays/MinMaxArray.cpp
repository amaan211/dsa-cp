#include<iostream>
#include<climits>
using namespace std;

// find the max and min element in an array // this is the iterative approach, there is also a recursive approach

int max(int a[],int n)
{
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx= max(mx, a[i]);
    }

    return mx;
}

int min(int a[],int n)
{
    int mi=INT_MAX;
    for(int i=0; i<n; i++)
    {
        mi= min(mi, a[i]);
    }

    return mi;
}

int main(void)
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"max is "<<max(a,n)<<" "<<"min is "<<min(a,n)<<endl;
}

