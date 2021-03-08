#include<iostream>
using namespace std;
// count sort

void countSort(int a[], int n)
{
    //int k=a[0];
    // for(int i=0; i<n; i++)
    // {
    //     k = max(k,a[i]);
    // }

    int count[1000]={0};
    for(int i=0; i<n; i++)
    {
        count[a[i]]++;
    }

    for(int i=1; i<=sizeof(count)/sizeof(count[0]); i++) // can also be changed to i<=k
    {
        count[i] += count[i-1];
    }

    int output[n];
    for(int i=n-1; i>=0; i--)  // most important loop // remember to access original array from the end
    {
        output[--count[a[i]]] = a[i];
    }

    for(int i=0; i<n; i++)
    {
        a[i]=output[i];
    }
}

int main(void)
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    countSort(a,n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}