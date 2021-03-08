#include<iostream>
#include<climits>
using namespace std;

// find the max and min element in an array // this is the iterative approach, there is also a recursive approach

int mx(int a[], int start, int end, int ans)
{   
    if(start==end)
    {
        return a[start]; 
    }

    for(int i=start; i<end; i++)
    {
        ans=max(ans,a[i]);
    }
    int mid=(start+end)/2;
    return max(mx(a,start,mid,ans), mx(a,mid+1,end,ans));
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

    cout<<"max is "<<mx(a,0,n-1,-1000)<<" "<<"min is "<<min(a,n)<<endl;
}

