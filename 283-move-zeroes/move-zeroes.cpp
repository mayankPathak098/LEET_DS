class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        
        vector<int> vec(n,0);
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) continue;
            else vec[k++]=nums[i];
        }
        for(int i=0;i<n;i++) nums[i]=vec[i];

    }
};