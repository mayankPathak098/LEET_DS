class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]+=1;
        
        vector<pair<int,int> >vec(mp.begin(),mp.end());
        vector<int> ans;
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        int i=0;
        for(auto val:vec){
            if(i==k) break;
            ans.push_back(val.first);
            i++;
        }
        //answer is here
        return ans;


        

        return ans;
    }
}; 