class Solution {
public:
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v=points.size();
        vector<vector<pair<int,int>>>adj(v);
        
        int cost=0;

        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        pq.push({0,0});
        vector<int>vis(v,0);
        while(!pq.empty()){
            auto[weight,vertex]=pq.top();
            pq.pop();

            if(vis[vertex]==1) continue;
            vis[vertex]=1;

            cost+=weight;
            for(int i=0;i<v;i++){
                if(vis[i]==0) {
                    int dist=abs(points[vertex][0]-points[i][0])+abs(points[vertex][1]-points[i][1]);
                    pq.push({dist,i});
                }
            }
        }    
        return cost;

    }
};