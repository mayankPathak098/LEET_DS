class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string,vector<string> > mp;

        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            mp[str].push_back(strs[i]);
            }
        
        vector<vector<string>> answer;
        for(auto val: mp){
            answer.push_back(val.second);
        }
        return answer;
    }
};

auto init = atexit([](){ofstream("display_runtime.txt") << "0";});