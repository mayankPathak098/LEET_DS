class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX) return 0;
        if(x<INT_MIN) return 0;
        long long int num=0, f=1;
        if(x<0) {
            f=-1;
            x*=f;
        }
        string s=to_string(x);
        //revese process
        for(int i=0;i<s.size()/2;i++){
            char temp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp;
        }
        
        //convert to num process
        for(int i=0;i<s.size();i++){
            num+=pow(10,s.size()-1-i)*(s[i]-'0');
            if(num*f>INT_MAX) return 0;
            if(num*f<INT_MIN) return 0;
        }
        return num*f;

    }
};