class Solution {
public:
    
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int trucksize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int unit=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]!=0 ){
                unit+=boxTypes[i][1];
                boxTypes[i][0]--;
                if(boxTypes[i][0]!=0) i--;
                trucksize--;
            }
            if(trucksize==0) break;
        }

        
        return unit;
        
    }
};