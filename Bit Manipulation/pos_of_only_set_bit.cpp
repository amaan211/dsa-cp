// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        int pos = 0;
        int count = 0;
        int pos_of_one = 0;
        while(N != 0){
            int lsb = N & 1;
            pos++;
            if(lsb == 1){
                count++;
                pos_of_one = pos;
            }
            N = N>>1;
        }
        
        if(count == 1){
            return pos_of_one;
        }
        return -1;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }