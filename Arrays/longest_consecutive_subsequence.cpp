class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int hash[100001];
      memset(hash, 0, sizeof(hash));
      for(int i=0; i<N; i++){
          hash[arr[i]]++;
      }
      
      
      
      int count = 0;
      int mx_count = INT_MIN;
      for(int i=0; i<100001; i++){
          if(hash[i]!=0) count++;
          else count =0;
          mx_count = max(mx_count, count);
      }
      return mx_count;
    }
};
