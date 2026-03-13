class Solution {
public:

    bool dfs(int start,vector<int>adj[],vector<int>&vis,vector<int>&ans){
        vis[start]=1;
        for(int i:adj[start]){
            if(vis[i]==1) return true;//cycle
            if(vis[i]==0){
                if(dfs(i,adj,vis,ans)) return true;
            }
        }
        vis[start]=2;
        ans.push_back(start);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        //if(prerequisites.size()==0) return {0};
        int r=prerequisites.size();
        int c;
        if(r!=0) c=prerequisites[0].size();
        
        vector<int>adj[numCourses];
        vector<int>vis(numCourses,0);
        for(auto x:prerequisites){
            int a=x[0];
            int b=x[1];
            adj[b].push_back(a);
        }

        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                if(dfs( i,adj,vis,ans)) return {};
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};