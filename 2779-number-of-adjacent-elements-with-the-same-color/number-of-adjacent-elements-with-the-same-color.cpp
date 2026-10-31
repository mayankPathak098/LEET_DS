class Solution {
public:
    
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int>ans,vec(n,0);
        int count=0;
        for(int i=0;i<queries.size();i++){
            int idx=queries[i][0];
            int color=queries[i][1];

            if(idx>0 && vec[idx]!=0 && vec[idx]==vec[idx-1]) count--;
            if(idx<n-1 && vec[idx]!=0 && vec[idx]==vec[idx+1]) count--;

            vec[idx]=color;//coloring

            if(idx>0 && vec[idx]!=0 && vec[idx]==vec[idx-1]) count++;
            if(idx<n-1 && vec[idx]!=0 && vec[idx]==vec[idx+1]) count++;

            ans.push_back(count);
        }
        return ans;
    }
};