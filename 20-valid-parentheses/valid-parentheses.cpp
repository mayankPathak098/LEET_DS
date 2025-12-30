class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        char stk[n];
        char c;
        int top=-1;

        for(int i=0;i<n;i++){
            if(s[i]=='(' ||s[i]=='[' ||s[i]=='{'){
                top++;
                stk[top]=s[i];
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(top==-1) return false;
                c=s[i];
                if((c==')' && stk[top]!='(') || (c=='}' && stk[top]!='{') || (c==']' && stk[top]!='[')) return false;

                else top--;

            }

        }
        if(top!=-1) return false;
        return true;

    }
};