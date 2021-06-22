// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> v;
        v.push_back(1);
        
        
        for(int x =2; x<=N; x++){
            multiply(v, x);
        }
        
        return v;
        
        
    }
    
    void multiply(vector<int>& v, int x){
        int carry = 0;
        for(int i=0; i<v.size(); i++){
            int prod = (v[i] * x) + carry;
            v[i] = prod%10;
            carry = prod/10;
        }
        
        
        while(carry){ // try to put the carry in v
            v.push_back(carry%10);
            carry = carry/10;
        } 
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends