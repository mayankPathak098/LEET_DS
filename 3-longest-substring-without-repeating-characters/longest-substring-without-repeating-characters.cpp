class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            int l=0,len=0;
            unordered_set<char>mp;
            for(int i=0;i<s.size();i++){
                while(mp.find(s[i]) != mp.end()){ //found
                    mp.erase(s[l]);
                    l++;
                }
                    mp.insert(s[i]);
                    len=max(len,i-l+1);
            }
            return len;
    }
};
//2