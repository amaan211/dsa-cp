#include<bits/stdc++.h>
using namespace std;
//gcd
// lcm * (hcf or gcd) = a*b;
int gcd(int a, int b){

    return b==0 ? a: gcd(b, a%b);

    // if(b==0){
    //     return a;
    // }

    // return gcd(b, a%b);
}


int main(void){
    int n; cin>>n;
    int m; cin>>m;

    cout<<gcd(n,m)<<endl;
}


