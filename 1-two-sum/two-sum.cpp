class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int found=target-nums[i];
            if(mp.find(found)!=mp.end()){//found
                ans.push_back(i);
                ans.push_back(mp[found]);
                break;
            }
            //else not found
            mp[nums[i]]=i; //value:index
        }
        return ans;
    }
};