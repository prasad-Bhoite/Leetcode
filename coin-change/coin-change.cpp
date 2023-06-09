class Solution {
public:
    int solveMem(vector<int>& coins, int amount,vector<int> &dp)
    {
            //base case...
            if(amount ==0)
            {
                return 0;
            }
            if(amount < 0)
            {
                return INT_MAX;
            }

            //step 3: Base case ke just baad check answer is already exist or not...
            if(dp[amount] != -1)
            {
                return dp[amount];
            }
            int mini = INT_MAX;
            for(int i=0;i<coins.size();i++)
            {
                //Recursive call...
                int ans = solveMem(coins,amount-coins[i],dp);
                if(ans!=INT_MAX)
                {
                    mini = min(mini,ans+1);
                }
            }

            //step 2: ans store karlo dp array me...
            dp[amount]  = mini;
            return mini;
            // returm dp;
    }

    int coinChange(vector<int>& coins, int amount) 
    {
        // int ans = solveUsingRecursion(coins,amount);
        // if(ans==INT_MAX)
        // {
        //     return -1;
        // }
        // else
        // {
        //     return ans;
        // }

        //Step 1 : dp array create karna hai...
        vector<int> dp(amount+1,-1);

        int ans = solveMem(coins,amount,dp);
        if(ans == INT_MAX)
        {
            return -1;
        } 
        else
        {
            return ans;
        }
    }
};