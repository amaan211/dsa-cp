// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.


// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]
// Example 4:

// Input: nums = [1]
// Output: [1]


class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
       int k=0;
       int l=0;
       int n=nums.size();
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i-1]<nums[i])
            {
                k=i;
                break;
            }
        }
        
        if(k==0)
        {
            sort(nums.begin(),nums.end()); return;
        }
        
        for(int j=nums.size()-1; j>0; j--)
        {
            if(nums[k-1]<nums[j])
            {
                l=j;
                break;
            }
        }
       
        swap(nums[k-1],nums[l]);
        sort(nums.begin()+k,nums.end());
        
        
    }
};