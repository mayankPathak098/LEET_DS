class Solution {
public:
    int bfs(vector<vector<int>>& grid,int i,int j){
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        if(i<0||j<0||i>=r||j>=c||grid[i][j]==0) return count;
        grid[i][j]=0;//visited
        int n1=bfs(grid,i+1,j);
        int n2=bfs(grid,i-1,j);
        int n3=bfs(grid,i,j+1);
        int n4=bfs(grid,i,j-1);

        return count+n1+n2+n3+n4+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int max=0;
        int sum=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1) sum=bfs(grid,i,j);
                if(sum>max) max=sum;
            }
        }
        return max;
    }
};