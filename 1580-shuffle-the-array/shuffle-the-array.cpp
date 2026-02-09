class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=0;
        vector<int>ans;
        while(k!=n){// 0 1 2
            ans.push_back(nums[k]);
            ans.push_back(nums[k+n]);
            k++;
        }
        return ans;
    }
};