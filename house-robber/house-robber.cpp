class Solution {
public:
    // n--> ending index...
    int solveUsingRecursion(vector<int> &nums,int n)
    {
        //base case ...
        if(n<0)
        {
            return 0;
        }

        //ek hi element hoga to utani hi chori hogi naa
        if(n==0) //n is index
        {
            return nums[0];
        } 

        //include wala case...
        int include = solveUsingRecursion(nums,n-2) + nums[n];
        int exclude = solveUsingRecursion(nums,n-1) + 0;

        return max(include,exclude);
    }


   int solveUsingMem(vector<int> &nums,int n, vector<int> &dp) // dp array pass karat jaa
   {
        //base case ...
        if(n<0)
        {
            return 0;
        }

        //ek hi element hoga to utani hi chori hogi naa
        if(n==0) //n is index
        {
            return nums[0];
        } 

        //step 3 : if the answer is alredy exist then return ...
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        //include wala case...
        int include = solveUsingMem(nums,n-2,dp) + nums[n];
        int exclude = solveUsingMem(nums,n-1,dp) + 0;


        // step 2 : Store ans into the dp array...
          dp[n] = max(include,exclude);
        return dp[n];
   }

    int rob(vector<int>& nums) {

        //A : For Recursion ...
        // int n = nums.size()-1;
        // return solveUsingRecursion(nums,n);

        //B : For Top Down Approach ...

        // Step 1 : Create DP array...
        int n = nums.size()-1; //last index;
        // u can put n+1  or  n+2 or n+20 but kam nahi honi chahiye...
        vector<int> dp(n+1,-1);  
        // jiski value update ho rahi usko lele not a nums bcoz wo to same hai naa...
        return solveUsingMem(nums,n,dp);
    }
};