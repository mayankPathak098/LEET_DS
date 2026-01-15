class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> vec;
        int n=digits.size();
        int temp=1;
        for(int i=n-1;i>=0;i--){
            digits[i]+=temp;
            temp=0;
            if(digits[i]>9){
                temp=digits[i]/10;
                digits[i]=digits[i]%10;
            }else break;
        }
        if(temp!=0){
            vec.push_back(temp);
            for(int i:digits) vec.push_back(i);
            return vec;
        }
        
        return digits;
    }
};