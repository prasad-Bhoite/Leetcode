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
                sum = sum + nums[i]; // 0 + (-1)  = -1
                maxSum  = max(sum,maxSum); // -1  -infinity  --> //-1  
                // OR
                // if(maxSum < sum)
                // {
                //     maxSum = sum;
                // }

                if(sum < 0)
                {
                    sum = 0;  //sum  = 0 
                }
        } 
        return maxSum;
    }
};