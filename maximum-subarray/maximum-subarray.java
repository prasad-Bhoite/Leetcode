class Solution {

    int max(int a,int b)
    {
        if(a>b)
        return a;
        else
        return b;
    }
    
    public int maxSubArray(int[] nums) {
        
    //step  1:
    int sum = 0;
    int maxi = -100000;

    int n = nums.length;
    for(int i=0;i<n;i++)
    {
        sum = sum + nums[i];
        maxi  = max(sum,maxi);

        if(sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
    }
}