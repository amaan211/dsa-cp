#include<iostream>
using namespace std;

// write a program to reverse a given array

void reverseArray(int a[], int n)
{
    // method 1 --> by creating a temp array 
    int t[n];
    for(int i=0; i<n; i++)
    {
        t[i]=a[n-1-i];
    }

    for(int i=0; i<n; i++)
    {
        a[i]=t[i];
    }
}

int main(void)
{
    int n; cin>>n;
    int a[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    reverseArray(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}