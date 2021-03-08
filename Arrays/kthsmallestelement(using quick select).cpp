#include<iostream>
using namespace std;

// this is the implementation of the quick select algo to find the kth smallest element in an array
void swap(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int i=s-1;

    for(int j=s; j<e; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a,i,j);
        }
    }

    swap(a,i+1,e);
    return i+1;
}


int kthSmallest(int a[], int s, int e, int k)
{
    int pi = partition(a,s,e);

    if(k-1>pi)
    {
        return kthSmallest(a,pi+1,e,k);
    }
    else if(k-1<pi)
    {
        return kthSmallest(a,s,pi-1,k);
    }
    else
    {
        return a[pi];
    }

    return -1;
}

int main(void)
{
    int n; cout<<"enter n: "; cin>>n;
    int a[n];

    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int k; cout<<"enter k: "; cin>>k; 

    cout<<kthSmallest(a,0,n-1,k);
}