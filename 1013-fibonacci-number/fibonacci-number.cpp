class Solution {
public:
    int fibbo(int n,vector<int>&dp){
        if(n==0) return dp[n]=0;
        if(n==1) return dp[n]=1;

        if(dp[n]!=-1) return dp[n];

        return dp[n]=fibbo(n-1,dp)+fibbo(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return fibbo(n,dp);
    }   
};