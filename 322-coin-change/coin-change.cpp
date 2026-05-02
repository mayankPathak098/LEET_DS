class Solution {
public:
    int knapsack(int amount,vector<int>& coins,int idx,vector<vector<int>>&dp){
       if(idx==0){
        if(amount%coins[0]==0) return amount/coins[0];
        return INT_MAX-1;
       }
        if(dp[idx][amount]!=-1) return dp[idx][amount];

       int nottake=0+knapsack(amount,coins,idx-1,dp);
       int take=INT_MAX-1;
       if(coins[idx]<=amount) take=1+knapsack(amount-coins[idx],coins,idx,dp);

        return dp[idx][amount]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int ans=knapsack(amount,coins,n-1,dp);

        return ans>=INT_MAX-1?-1:ans; 
    }
};