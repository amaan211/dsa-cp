class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        // lets sort the array first
        if(n==1){
            return 0;
        }
        sort(arr, arr+n);
        
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        int ans = arr[n-1] - arr[0]; // v. imp.
        int mi, mx;
        
        for(int i=0; i<n-1; i++){
            mi = min(smallest, arr[i+1]-k);
            mx = max(largest, arr[i]+k);
            if(mi < 0) continue;
            ans = min(ans, mx-mi);
        }
        
        
        return ans;
    }
};
