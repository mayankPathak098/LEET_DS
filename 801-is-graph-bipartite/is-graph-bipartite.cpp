class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){

            if(color[i]==-1){
                queue<int>q;
                q.push(i);
                color[i]=0;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(int num:graph[node]){
                        if(color[num]==-1){
                            color[num]=!color[node];
                            q.push(num);
                        }
                        else if(color[num]==color[node]) return false;
                    }
                }
            
            
            }
        }
        return true;
    }
};