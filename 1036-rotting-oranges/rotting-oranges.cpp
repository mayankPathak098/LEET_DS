class Solution {
public:
    void bfs(){

    }
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int fresh=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0) return 0;
        int min=0;

        while(!q.empty()){
            int size=q.size();
            min++;
            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();

                int n1=it.first;
                int n2=it.second;
    
                if(n1-1>=0 && grid[n1-1][n2]==1) {
                    grid[n1-1][n2]=2;
                    q.push({n1-1,n2});
                    fresh--;
                    }
                if(n1+1<r && grid[n1+1][n2]==1) {
                    grid[n1+1][n2]=2;
                    q.push({n1+1,n2});
                    fresh--;
                    }
                if(n2-1>=0 && grid[n1][n2-1]==1) {
                    grid[n1][n2-1]=2;
                    q.push({n1,n2-1});
                    fresh--;
                    }
                if(n2+1<c && grid[n1][n2+1]==1) {
                    grid[n1][n2+1]=2;
                    q.push({n1,n2+1});
                    fresh--;
                    } 
            }
        }
        return fresh==0 ? min-1 : -1;
    }
};