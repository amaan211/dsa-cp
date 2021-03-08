// find the number of trailing zeroes in the binary rep of a number
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a; cin>>a;
    int res=a&1;
    int count=0;
    while(res==0)
    {
        count++;
        a=a>>1;
        res=a&1;
    }
    cout<<count<<endl;
}