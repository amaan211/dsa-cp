#include<bits/stdc++.h>
using namespace std;


long long smart(long long a[], long long n)
{
    sort(a,a+n);
    long long mx=INT_MIN;
    for(long long i=0; i<n; i++)
    {
        long long ans=a[i]*(n-i);
        mx=max(ans,mx);
    }
    return mx;
}

int main(void)
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long ans=smart(a,n);
    cout<<ans;
}