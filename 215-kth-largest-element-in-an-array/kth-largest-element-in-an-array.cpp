class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int len = nums.size();
        return nums[len-k];
    }
};