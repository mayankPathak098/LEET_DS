class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int i=0;

        while(i<n-1){
            if(nums[i] == nums[i+1]) {
                count++;
                i++;
            }
            else{
                i+=2;
            }
        }
        if( (n-count)%2!=0) count++;
        return count;
    }
};