// merge 2 arrays without using extra space
#include<bits/stdc++.h>
using namespace std;

void mergeArr(int a[], int n, int b[], int m)
{
    // a[]={1,5,9,10,15,20} // n=6 // i pointer
    // b[]={2,3,8,13} // m=4 // j pointer
    for(int j=m-1; j>=0; j--)
    {
        int i; int last=a[n-1];
        for(/*int dont use*/i=n-2; i>=0 && a[i]>b[j]; i--)
        {
            a[i+1]=a[i];
        }
        if(i!=n-2 || last>b[j])
        {
            a[i+1]=b[j];
            b[j]=last;
        }
    }
}

int main(void)
{
    int a[]={1,5,9,10,15,20};
    int b[]={2,3,8,13};
    int n=6;
    int m=4;
    mergeArr(a,n,b,m);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0; i<m; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}