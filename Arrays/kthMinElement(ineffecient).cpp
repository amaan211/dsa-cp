#include<bits/stdc++.h>
using namespace std;
// we can also do this by sorting the array and then a[k-1] will be the required element
int min(int a[], int n)
{
    int mi=1000000;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(mi>a[i])
        {
            mi=a[i];
            ans=i;
        }
    }

    a[ans]=100000;


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

    int k; cin>>k;
    int ans;
    for(int i=0; i<k; i++)
    {
        ans=min(a,n);
    }

    cout<<ans;
}