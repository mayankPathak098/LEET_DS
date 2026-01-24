class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>hash(nums.size()+1,0),ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]+=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(hash[i]==0) ans.push_back(i);
        }
        return ans;
    }
};