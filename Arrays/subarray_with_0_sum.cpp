class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int, int> s;
        bool isFound = false;
        int prefix_sum = 0;
        for(int i=0; i<n; i++){
            prefix_sum += arr[i];
            if(prefix_sum==0 or s[prefix_sum] or arr[i]==0){
                isFound = true;
                break;
            }
            s[prefix_sum]++;
        }
        
        return isFound;
    }
};