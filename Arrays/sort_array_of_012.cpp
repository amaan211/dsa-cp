class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int left = 0;
        int right = n-1;
        for(int i=0; i<=right; i++)
        {
            if(arr[i]==0)
            {
                swap(arr[i],arr[left]);
                left++;
            }
            
            else if(arr[i]==2)
            {
                swap(arr[i],arr[right]);
                right--;
                i--;
            }
        }
    }
    
};
