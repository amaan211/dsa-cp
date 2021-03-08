#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v;
    int times=32;
    while(times>0)
    {
        int lsb = n & 1;
        v.push_back(lsb);
        n=n>>1;
        times--;
    }

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<"\n";

    unsigned int num=0;
    for(auto it:v)
    {
        num=num<<1;
        num=num|it;
        
    }
    cout<<num<<endl;
}