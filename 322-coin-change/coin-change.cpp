class Solution {
public:
    int mincoin(vector<int>& coins,vector<int>&dp, int amount){
        if(amount==0) return 0;
        else if(amount<0) return INT_MAX-1;
        if(dp[amount]!=-1) return dp[amount];

        int mini=INT_MAX-1;

        for(int val:coins){
            int res=mincoin(coins,dp,amount-val);
             if (res != INT_MAX - 1) {
                mini = min(mini, res + 1);
            }
        }

        return dp[amount]=mini;


    }
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int>dp(amount+1,-1);
        int ans = mincoin(coins, dp, amount);
        if(ans >= INT_MAX - 1) return -1;
        return ans;
        
    }
};