class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int,int>>> adj(n + 1);
        //graph
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }

        vector<int> dist(n + 1, INT_MAX);
        dist[k]=0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});

        while(!pq.empty()){
            auto [time,node]=pq.top();
            pq.pop();
           

            for(auto val:adj[node]){
                int vertex=val.first;
                int wt=val.second;
                int d=wt+time;
                if(d<dist[vertex]){
                    dist[vertex]=d;
                    pq.push({d,vertex});
                }
            }
        }
        int ans=0;
        for(int i = 1; i <= n; i++){
            if(dist[i] == INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }
        return ans;

    }
};