class Solution {
public:/*
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<pair<int,int>>selected;
        int last=intervals[0][1];
        selected.push_back({intervals[0][0],intervals[0][1]});

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=last){
                selected.push_back({intervals[i][0],intervals[i][1]});
                last=intervals[i][1];
            }
        }
        return intervals.size()-selected.size();
        
    }*/
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int conflict=0;
        pair<int,int>sel;
        sel.first=intervals[0][0];
        sel.second=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<sel.second) conflict++;
            else {
                sel.first=intervals[i][0];
                sel.second=intervals[i][1];
            }

        }
        return conflict;
    }
};