class Solution {
public:
    int chori(int f,int n,vector<int>& nums,vector<int>& dp){
        if(n>=nums.size()|| (f==0 && n==nums.size()-1)) return 0;
        if(dp[n]!=-1) return dp[n];

        return dp[n]=nums[n]+max(chori(f,n+2,nums,dp),chori(f,n+3,nums,dp));
    }

    int rob(vector<int>& nums) {
        if(nums.size()==2) return max(nums[0],nums[1]);
        else if(nums.size()==1) return nums[0];

        vector<int>dp(nums.size()+1,-1);
        vector<int>dp1(nums.size()+1,-1);
        return max( {chori(0,0,nums,dp1),chori(1,1,nums,dp),chori(1,2,nums,dp)} );
    }
};