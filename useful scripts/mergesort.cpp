#include<iostream>
#include<string>
using namespace std;
// merge sort using recursion

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high-mid;

    int a[n1];
    int b[n2]; // temp arrays

    for(int i=0; i<n1; i++) 
    {
        a[i] = arr[low+i];
    }

    for(int i=0; i<n2; i++)
    {
        b[i] = arr[mid+1+i];
    }

    // merge
    int j=0;
    int i=0;
    int k=low;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k++] = a[i++];
        }

        else
        {
            arr[k++] = b[j++];
        }
    }

    while(i<n1)
    {
        arr[k++] = a[i++];
    }

    while(j<n2)
    {
        arr[k++] = b[j++];
    }

}


void mergeSort(int a[],int low,int high)
{
    if(low<high)  // check
    {
        int mid=(low+high)/2;
        
        mergeSort(a,low,mid);   //splitting into 2 segments
        mergeSort(a,mid+1,high);

        merge(a,low,mid,high); //merging the two sorted segments
    }
}


int main(void)
{
    int n;
    cout<<">:";
    cin>>n;

    int arr[n];              
    for(int i=0; i<n; i++)  // taking input of all numbers in array
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);  

    for(int i=0; i<n; i++)  // printing all elements
    {
        cout<<arr[i]<<" ";
    }
}