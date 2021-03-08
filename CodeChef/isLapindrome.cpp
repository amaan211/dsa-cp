#include<bits/stdc++.h>
using namespace std;

bool isLapindrome(string s)
{
    int a[26];
    memset(a,0,sizeof(a));
    if(s.size()%2!=0)
    {
        int mid=(s.size()+1)/2;
        s.erase(s.begin()+mid-1);
    }
    for(int i=0; i<s.size(); i++)
    {
        a[s[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(a[i]%2!=0 && a[i]!=0) // this could be the bug
        {
            return false;
        }
        
    }
    return true;
}

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=isLapindrome(s);
        if(ans==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
}