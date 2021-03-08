// how many bits to be changed to convert a --> b
// bit manipulation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    int x=a^b;
    // now we have to find the number of SET bits in x to get the answer
    int count=0;
    while(x>0)
    {
        x=x&(x-1);
        count++;
    }
    cout<<count<<endl;
}