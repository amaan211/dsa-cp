vector<bool> sieve(int n){
    // int arr[n];
    // for(int i=1; i<n; i++){
    //     arr[i-1] = i;
    // }
    vector<bool> isPrime(n+1, 1);
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i=2; i*i<=n; i++){
        if(isPrime[i] == 1){
              for(int j=2*i; j<=n; j+=i){
                isPrime[j] = 0;
            }  
        }
        
    }
    
    return isPrime;
}

vector<int> Solution::primesum(int A) {
    vector<bool> v = sieve(A);
    vector<int> ans;
    // for(auto it : v){
    //     cout<<it<<endl;
    // }
    for(int i=2; i<v.size(); i++){
        if (v[i] == 1){
            int x = A - i;
            if(v[x] == 1){
                ans.push_back(i);
                ans.push_back(x);
            }
        }
        if(ans.size()==2){
            break;
        }
    }
    
    return ans;
}