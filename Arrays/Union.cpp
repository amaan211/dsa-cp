#include<bits/stdc++.h>
using namespace std;

// find the union of two sorted arrays

void unios(int a[], int n, int b[], int m)
{
    set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }

    for(int i=0; i<m; i++)
    {
        s.insert(b[i]);
    }
    
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int a[]={1,2,3,3,4,5};
    int b[]={2,32,1,9,0};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(a[0]);
    unios(a,n,b,m);
}
