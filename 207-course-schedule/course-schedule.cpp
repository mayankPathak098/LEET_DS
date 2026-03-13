class Solution {
public:

    bool dfs(vector<int>adj[],vector<int>&vis,int start){
        vis[start]=1;
        for(int x:adj[start]){
            if(vis[x]==1) return true;//cycle found
            if(vis[x]==2){
                if(dfs(adj,vis,x)) return true;
            }
        }
        vis[start]=2;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        int r=prerequisites.size();
        int c=prerequisites[0].size();
        
        vector<int>adj[numCourses];
        vector<int>vis(numCourses,0);
        
        for(auto x:prerequisites){
            int u=x[0];
            int v=x[1];
            adj[v].push_back(u);
        }

        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                if(dfs(adj,vis,i)) return false;
            }
        }
        return true;
    
    }
};