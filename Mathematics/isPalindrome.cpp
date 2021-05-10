#include<bits/stdc++.h>
using namespace std;

// reverse the given number
int main(void){
    int n; cin>>n;
    int temp = n;
    int res = 0;
    // first we need to find the length of the given number
    // int len = 0;
    // int temp = n;
    // while(temp != 0){
    //     len++;
    //     temp = temp/10;
    // }
    // cout<<len<<endl;

    while(n != 0){
        int last_dig = n%10;
        res = (res * 10) + last_dig; 
        n = n/10;
    }
    
    if(temp == res){
        cout<<"yes its a palindrome"<<endl;
    }
    else cout<<"not a palindrome"<<endl;
}