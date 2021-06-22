class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        unordered_map<int, int> m;
        // for(int i=0; i<n; i++){
        //     m[arr[i]]++;
        // }
        // hashed.
    
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int k = X - arr[j] - arr[i];
                if(m.find(k)!=m.end()){
                    return true;
                }
            }
            m[arr[i]]++; // very important to check first and hash later
        }
    
        return false;
    }

};