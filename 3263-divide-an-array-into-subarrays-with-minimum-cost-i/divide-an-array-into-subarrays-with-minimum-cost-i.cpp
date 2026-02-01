class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec=nums;
        reverse(vec.begin(),vec.end());
        vec.pop_back();
        reverse(vec.begin(),vec.end());
        sort(vec.begin(),vec.end());

        return nums[0]+vec[0]+vec[1];
    }
};