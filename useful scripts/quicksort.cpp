#include<iostream>
#include<string>
using namespace std;
// quick sort

void swap(int a[], int i, int j)
{
    int temp = a[i];
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

    swap(a, i+1, e);
    return i+1;
}

void quickSort(int a[], int s, int e)
{
    if(s<e)
    {
        int pi = partition(a,s,e);

        quickSort(a,s,pi-1);
        quickSort(a,pi+1,e);
    }
     
}

int main(void)
{
    int n;
    cout<<">:";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    quickSort(a,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}