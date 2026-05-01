class Solution {
public:
    int chori(vector<int>& nums,int n,vector<int>&dp){
        if(n>=nums.size()) return 0;    
        if(dp[n]!=-1) return dp[n];

        return dp[n]=nums[n]+max(chori(nums,n+2,dp),chori(nums,n+3,dp));

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return max(chori(nums,0,dp),chori(nums,1,dp));
    }
};