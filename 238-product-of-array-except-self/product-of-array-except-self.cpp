class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1(n,0),vec2(n,0);
        vec1[0]=1;
        vec2[n-1]=1;
        for(int i=1;i<n;i++){
            vec1[i]=vec1[i-1]*nums[i-1];
            vec2[n-1-i]=vec2[n-i]*nums[n-i];
        }
        for(int i=0;i<n;i++){
            nums[i]=vec1[i]*vec2[i];
        }
        return nums;
    
    }
};