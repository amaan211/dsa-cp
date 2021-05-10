//sieve of eratosthenes
#include<bits/stdc++.h>
using namespace std;
vector<bool> sieve(vector<int> v){

    int size = sizeof(v)/sizeof(v[0]);
    vector<bool> isPrime(size+1,1);
    // memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = 0;
    isPrime[1] = 0;

    for(int i=2; i*i<=size; i++){
        if(isPrime[i]==1){
            for(int j=i*2; j<=size; j+=i){
                isPrime[j] = 0;
            }
        }
    }

    
    return isPrime;


}


