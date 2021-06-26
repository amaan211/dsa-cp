class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int ans = 0;
        int max_from_left = 0;
        int max_from_right = 0;
        int hi = n-1;
        int lo = 0;
        
        while(lo<=hi){
        
            if(arr[lo]<arr[hi]){
            
                if(arr[lo]>max_from_left){
                
                    max_from_left = arr[lo];
                }
                
                else{
                
                    ans += max_from_left - arr[lo];
                }
                lo++;
            }
            
            else
            {
                if(arr[hi]>max_from_right){
                
                    max_from_right = arr[hi];
                }
                
                else{
                
                    ans += max_from_right - arr[hi];
                }
                hi--;
            }
            
            
        }
        
        return ans;
    }
};