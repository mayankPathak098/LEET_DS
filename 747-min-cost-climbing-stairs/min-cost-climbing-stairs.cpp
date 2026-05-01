class Solution {
public:
    int climb(int n,vector<int>&dp,vector<int>& cost){
        if(n>=cost.size()) return 0;

        if(dp[n]!=-1) return dp[n];

        return dp[n] = cost[n] + min(climb(n + 1, dp, cost), climb(n + 2, dp, cost));

    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        
        vector<int> dp(n,-1);
        
        return min( climb(1,dp,cost),climb(0,dp,cost) );
    }
};