class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat[0].size(); //col 4
        int n=mat.size();   //row 3
        vector<int> a1(n,0),a2(m,0); // a1=3 a2=4
        vector<vector<int>>ans=mat;
        for(int i=0;i<n;i++){//row
            for(int j=0;j<m;j++){//col
                if(ans[i][j]==0){
                    mat[i]=a2;
                    for(int k=0;k<n;k++) mat[k][j]=0;
                }
            }
        }
        
    }
};