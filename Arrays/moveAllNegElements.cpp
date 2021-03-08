#include<bits/stdc++.h>
using namespace std;

// move all negative elements in an array to one side
// we will be using the pointer approach here, however I think that this question can also be solved by quickselect
void swap(int a[], int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void func(int a[], int n)
{
    int pointer=0;
    int ok=0;

    while(ok<=n)
    {
        if(a[ok]<0)
        {
            swap(a,ok,pointer);
            pointer++;
        }
        ok++;
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
    func(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}