#include<bits/stdc++.h>
using namespace std;

int getRev(int n)
{
    unsigned int rev=0;
    while(n!=0)
    {
        int lb= n&1;
        rev |= lb;
        n = n>>1;
        rev = rev<<1;
    }
    rev = rev>>1;
    return rev;
}
int nthPalindromeBin(int n)
{
    // first we will find the length and then the offset to find the number
    int count =1;
    int len =1;
    while(count<n)
    {
        len++;
        count += (1<<((len-1)/2)); // in the end, will return the count of the last number in the group
    }
    count -= (1<<((len-1)/2)); // count goes back 1 group
    int offset = n-count-1;

    // now we have the length and the offset, we just need to build the number using them
    int ans= 1<<(len-1);
    ans |= offset<<(len/2);

    int valueFR= (ans>>(len/2));
    int rev = getRev(valueFR);

    ans |= rev;
    return ans;
}


int main()
{
    int n; cin>>n;
    int ans= nthPalindromeBin(n);
    cout<<ans<<endl;
}