class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp,mp2;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }   

        int n=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            if(mp2.find(nums[i])!=mp2.end()){
                continue;
            }
            auto it=mp.find(nums[i]);
            if(it!=mp.end() && it->second>n) {
                mp2[it->first]=it->second;
                ans.push_back(it->first);
                }
 
        }    
        return ans;
    }
};