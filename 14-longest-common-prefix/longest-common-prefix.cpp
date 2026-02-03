class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int min=strs[0].size();
        int idx=0;
        
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < min) {
                min = strs[i].size();
                idx = i;
            }
        }
        
        
        string str=strs[idx];
        while(!str.empty()){
            int i=0;
            for(string s:strs){
                if(s.substr(0,str.size())==str ) i++;
            }
            if(i==strs.size() ) return str;
            str.pop_back();
        }
        return "";
    }
};