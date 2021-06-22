class Solution{
public:


	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    // related to kadanes algorithm
	    typedef long long ll;
	    
	    ll max_overall = INT_MIN;
	    ll min_till_here = 1;
	    ll max_till_here = 1;
	    
	    for(int i=0; i<n; i++){
	        ll temp = max_till_here;
	        max_till_here = max((ll)arr[i], max(arr[i]*max_till_here, arr[i]*min_till_here));
	        min_till_here = min((ll)arr[i], min(arr[i]*temp, arr[i]*min_till_here));
	        
	        max_overall = max(max_till_here, max_overall);
	    }
	    
	    
	    return max_overall;
	}
};