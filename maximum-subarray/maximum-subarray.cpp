class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        // step 1 : I have initialized two variables...
        int sum = 0;
        int maxSum = INT_MIN;
        //step 2:
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
                sum = sum + nums[i];
                // maxSum  = max(sum,maxSum);
                // OR
                if(maxSum < sum)
                {
                    maxSum = sum;
                }

                if(sum < 0)
                {
                    sum = 0;
                }
        } 
        return maxSum;
    }
};