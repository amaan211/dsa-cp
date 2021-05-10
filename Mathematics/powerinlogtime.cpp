// calculate a^b in logarithmic time complexity
// if b is even, a^b = (a^2)^b/2
// if b is odd , a^b = a*a^(b-1)
#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }

    if(b%2 == 0){
        return pow(a*a, b/2);
    }
    return a*pow(a,b-1);
}


int main(void){
    int a = 3;
    int b = 12;
    
    int ans = power(a,b);
    cout<<ans<<endl;

}