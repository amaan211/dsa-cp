// reverse a 32 bit integer (other method) (better) (less space)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int times=32;
    long long rev=0;
    while(times>0)
    {
        int lsb= n&1;
        rev |= lsb;
        n= n>>1;
        rev= rev<<1;
        times--;
    }
    rev=rev>>1;
    cout<<rev<<endl;
}