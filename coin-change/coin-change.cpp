class Solution {
public:

/*int solveUsingRecursion(vector<int> &coins,int amount)
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
            return mini;    
}*/
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
            // return mini;
            return dp[amount];
    }


int solveTab(vector<int> &coins,int amount)
{
    //Step 1 : Create Dp array...
    vector<int> dp(amount+1,INT_MAX); //har ek amount konsi value store hogi mini      wali-->INT_MAX initially...

    //step 2 : B.C ko dekho -->According value fill karo...
    dp[0] = 0;

    //step 3 : 0---> target
    for(int i=1;i<=amount;i++)
    {
            for(int j=0;j<coins.size();j++)
            {       if(i-coins[j] >= 0 && dp[i-coins[j]]!=INT_MAX)
                    {
                        int ans = dp[i - coins[j]];
                        dp[i] = min(dp[i],1+ans);
                    }
            }
            // dp[i] = min(dp[i],ans+1);
    } 
    return dp[amount];
}

    int coinChange(vector<int>& coins, int amount) 
    {
        //A : Recursion...
        // int ans = solveUsingRecursion(coins,amount);
        // if(ans==INT_MAX)
        // {
        //     return -1;
        // }
        // else
        // {
        //     return ans;
        // }


        // B :For Top Down Approach ....
        //Step 1 : dp array create karna hai...
    //     vector<int> dp(amount+1,-1);

    //     int ans = solveMem(coins,amount,dp);
    //     if(ans == INT_MAX)
    //     {
    //         return -1;
    //     } 
    //     else
    //     {
    //         return ans;
    //     }
    // }


    // C : For Bottom Up Approach ...
    int ans = solveTab(coins,amount);
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