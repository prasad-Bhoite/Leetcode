class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int maxSum = INT_MIN;
    //     int sum = 0;
    //     int n = nums.size();

    //     for(int i=0;i<n;i++)
    //     {
    //         sum = sum + nums[i];
    //         maxSum = max(sum,maxSum);
    //         if(sum<0)
    //         {
    //             sum = 0;
    //         }
    //     }
    // return maxSum;
    int n = nums.size();
     if(n <= 0)
    {
        return 0;
    }

    long long sum = 0;
    long long maxSum  = INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum  = sum + nums[i];
        maxSum  = max(sum,maxSum);

        if(sum<0)
        {
            sum = 0;
        }
    }
    return maxSum;
    }

};