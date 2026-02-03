class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int min=strs[0].size();
        int idx=0,i=0;
        for(string s:strs) {
            if(s.size()<min) {
                idx=i;
                min=s.size();}
            i++;
            }
        
        string str=strs[idx];

        while(min>0){
            int i=0;
            for(string s:strs){
                if(s.substr(0,str.size()) == str ) i++;
                if(i==strs.size()) return str;
                
            }
            str.pop_back();
            min--;
        }
        return "";
    }
};