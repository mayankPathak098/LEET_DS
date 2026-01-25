class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()<1) return intervals; 
        ans.push_back( {intervals[0][0],intervals[0][1]} );
        for(int i=1;i<intervals.size();i++){
            vector<int>q;
            if(intervals[i][0]<=ans.back()[1]){
                int min1=min(intervals[i][0],ans.back()[0]);
                int max1=max(intervals[i][1],ans.back()[1]);
                q.push_back(min1);
                q.push_back(max1);
                ans.pop_back();
                ans.push_back(q);
            }
            else {
                q.push_back(intervals[i][0]);
                q.push_back(intervals[i][1]);
                ans.push_back(q);
            }
        }
        return ans;

    }
};