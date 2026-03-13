class Solution {
public:
    void dfs(int start,vector<vector<int>>& isConnected,vector<int>&vis){
        vis[start]=1;
        for(int j = 0; j < isConnected.size(); j++){
            if(isConnected[start][j] == 1 && vis[j] == 0){
                dfs(j, isConnected, vis);
            }

    }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0) {
                dfs(i,isConnected,vis);
                count++;
            }
            
        }
        return count;
    }
};