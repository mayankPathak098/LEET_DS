class Solution {
public:
    int coindp(int amount,int idx, vector<int>& coins,vector<vector<int>>&dp){
        if(idx==0){
            return (amount%coins[0]==0);
            //return INT_MAX-1;
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount];

        int nottake=0+coindp(amount,idx-1,coins,dp);
        int take=0;
        if(coins[idx]<=amount) take=coindp(amount-coins[idx],idx,coins,dp);

        return dp[idx][amount]=take+nottake;

    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = coindp(amount,n-1,coins, dp);
        
        if(ans >= INT_MAX - 1) return 0;
        return ans;

    }
};