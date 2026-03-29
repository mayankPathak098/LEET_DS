class Solution {
public:
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v=points.size();
        
        int cost=0;
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        pq.push({0,0});
        
        vector<int>vis(v,0);
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int value=it.first;
            int u=it.second;
            if(vis[u]==0){
                vis[u]=1;
                cost+=value;
                for(int i = 0; i < v; i++) {
                if(vis[i] == 0) {
                    int dist = abs(points[u][0] - points[i][0]) + abs(points[u][1] - points[i][1]);
                    pq.push({dist, i});
                }
            }
        }
    }
    return cost;  }
};