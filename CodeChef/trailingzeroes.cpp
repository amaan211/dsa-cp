#include<bits/stdc++.h>
using namespace std;

int fac(int n)
{
    int sum=0;
    int term=234;
    int i=1;
    while(term!=0)
    {
        term=n/pow(5,i);
        i++;
        sum+=term;
    }
    
    return sum;
}

int main()
{
    long long t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=fac(n);
        cout<<ans<<endl;
    }
}