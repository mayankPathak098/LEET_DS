class Solution {
public:
//result = result × 26 + (character − 'A' + 1)
    int titleToNumber(string columnTitle) {
        int result=0;
        for(int i=0;i<columnTitle.size();i++){
            result=result*26 +(columnTitle[i]-'A'+1);
        }
        return result;
    }
};