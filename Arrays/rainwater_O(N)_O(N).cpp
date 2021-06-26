class Solution{

    // Function to find the trapped water between the blocks.
    public:
    
    
    int trappingWater(int arr[], int n){
        // Code here
        // in this question, we have to preprocess the array first
        if(n<3) return 0; // edge case
        
        int left[n];
        int right[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for(int i=1; i<n; i++)
        {
            left[i] = max(left[i-1], arr[i]);
        }
        for(int i=n-2; i>=0; i--)
        {
            right[i] = max(right[i+1], arr[i]);
        }
        
        // now left and right arrays have been initialised
        int ans = 0;
        for(int i=1; i<n-1; i++)
        {
            ans += min(left[i], right[i]) - arr[i]; 
        }
        
        return ans;
    }
};