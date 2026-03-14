class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s;
        vector<string>v;
        for(int num:nums) v.push_back(to_string(num));

        sort(v.begin(),v.end(),[](string a,string b){
            return a+b<b+a;
        });

        reverse(v.begin(),v.end());
        if(v[0] == "0") return "0";
        for(string num:v){
            s+=num;
        }
        return s;

    }
};