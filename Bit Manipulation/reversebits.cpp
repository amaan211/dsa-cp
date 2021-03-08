// reverse the bits of any given number
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    unsigned int rev=0;
    while(n!=0)
    {
        int lb= n&1;
        rev |= lb;
        n = n>>1;
        rev = rev<<1;
    }
    rev = rev>>1;
    cout<<rev<<endl;
}