#include<iostream>
using namespace std;

// write a program to reverse a given array
void swap(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void reverseArray(int a[], int n)
{
    // method 2 --> by reversing in place // this is iterative approach, there is also a recursive approach...
    int mid=n/2;
    for(int i=0; i<=n/2; i++)
    {
        swap(a,i,n-1-i);
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