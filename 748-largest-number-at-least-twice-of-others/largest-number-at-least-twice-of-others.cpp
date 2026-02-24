class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>ans=nums;
        sort(ans.begin(),ans.end());
        int max=ans[ans.size()-1];
        for(int i : ans){
            if(i!=max && max < 2*i) return -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] == max) return i;
        }
        return -1;
    }
};