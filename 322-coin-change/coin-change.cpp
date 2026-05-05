class Solution {
public:
    int knapsack(int target,vector<int>& coins,int idx,vector<vector<int>>&dp){
        if(idx==0){
            if(target%coins[0]==0) return target/coins[0];
            return INT_MAX-1;
        }
        if(dp[idx][target]!=-1) return dp[idx][target];

        int nottake=knapsack(target,coins,idx-1,dp);
        int take=INT_MAX-1;
        if(coins[idx]<=target) take=1+knapsack(target-coins[idx],coins,idx,dp);

        return dp[idx][target]=min(take,nottake);


    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int ans=knapsack(amount,coins,n-1,dp);

        return ans>=INT_MAX-1?-1:ans; 
    }
};