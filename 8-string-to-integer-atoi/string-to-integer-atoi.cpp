class Solution {
public:
    int myAtoi(string s) {
        vector<int>vec;
        vector<char>vec2;
        long long n=1,ans=0;
        int digit=1;   //1 non-digit // 0 digit
        for(int i=0;i<s.size();i++){
            if(vec2.size()==0 && vec.size()==0 && (s[i]=='-')){ 
                n=-1;
                vec2.push_back('-');
                }
            else if(s[i]>=48 && s[i]<=57) vec.push_back(s[i]-48);

            else if( vec2.size()==0 && vec.size()==0 && s[i]==' ') continue;

            else if(vec2.size()==0&& vec.size()==0 &&s[i]=='+') vec2.push_back('+');

            else break;
        }

        if(vec.size()==1) ans=vec[0];
        else if(vec.size()>1){
            for(int i=0;i<vec.size();i++){
                ans=ans*10+vec[i];
                if(n*ans>=INT_MAX) return INT_MAX;
                if(n*ans<=INT_MIN) return INT_MIN;
            }
        }
        ans=n*ans;
        
        return ans;
        
    }
};