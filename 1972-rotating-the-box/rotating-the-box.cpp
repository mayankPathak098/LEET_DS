class Solution {
public:
    vector<vector<char>> rotate(vector<vector<char>>& boxGrid){
        int row=boxGrid.size();//interchange to col
        int col=boxGrid[0].size();//its row
        vector<vector<char>>newbox(col,vector<char>(row));
        //int j=0;
        for(int i=0;i<col;i++){//written col but its row
            for(int j=0;j<row;j++){//written row but its col
                newbox[i][j]=boxGrid[row-1-j][i];
        }
        }
        return newbox;

    }
    void fix(vector<char>&vec,int idx,int count){
        while(count>0){
            vec[idx--]='#';
            count--;
        }
    }
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int row=boxGrid.size();//interchange to col
        int col=boxGrid[0].size();//its row
        //vector<vector<char>>newbox=rotate(boxGrid);
        int count=0;
        for(int i=0;i<row;i++){
            count =0;
            for(int j=0;j<col;j++){
                if(boxGrid[i][j]=='#') {
                    count++;
                    boxGrid[i][j]='.';
                    }
                else if(boxGrid[i][j]=='*') {
                    fix(boxGrid[i],j-1,count);
                    count=0;
                }
                if(j==col-1 && count>0) {
                    fix(boxGrid[i],j,count);
                    count=0;
                    }
            }
        }

        vector<vector<char>>newbox=rotate(boxGrid);
        return newbox;
    }
};