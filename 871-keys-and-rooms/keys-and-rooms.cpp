class Solution {
public:
    void dfs(int start,vector<vector<int>>& rooms,vector<int>&vis){
        vis[start]=1;
        for(int num:rooms[start]){
            if(vis[num]==0) dfs(num,rooms,vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<int>vis(rooms.size(),0);
        dfs(0,rooms,vis);
        for(int num:vis){
            if(num==0) return false;
        }
        return true;
    }
};