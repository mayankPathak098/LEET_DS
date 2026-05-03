class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> adj(n + 1);  
        for(auto &it : edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        int src=0;
        vector<int>count(n,1);

        while(src!=n){
        vector<int>vis(n+1,INT_MAX);
        vis[src]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        pq.push({0,src});
        
        while(!pq.empty()){
            auto[weight,vertex]=pq.top();
            pq.pop();
            for(auto val:adj[vertex]){
                int adjvertex=val.first;
                int adjwt=val.second;
                int d=adjwt+weight;
                if(d<vis[adjvertex]){
                    vis[adjvertex]=d;
                    pq.push({d,adjvertex});
                    
                }
            }
            int reachable = 0;
            for(int i:vis){
                if(i <= distanceThreshold) reachable++;
            }

            count[src] = reachable;
        }
        src++;
        }

        int ans = -1;
        int minReach = INT_MAX;

        for(int i = 0; i < n; i++){
            if(count[i] <= minReach){
                minReach = count[i];
                ans = i;  
            }
        }

        return ans;
    }
};