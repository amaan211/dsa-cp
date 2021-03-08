// count the number of set bits in a given integer
// use the n&(n-1) technique
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int count =0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<endl;
    return 0;
}