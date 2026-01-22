class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans,ans1={-1,-1};
        int s=0,e=nums.size()-1;
        int idx1=-1,idx2=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target) {
                idx1=mid;
                e=mid-1;
                }
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;

        }
        s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target) {
                idx2=mid;
                s=mid+1;
                }
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;

        }
        ans.push_back(idx1);
        ans.push_back(idx2);
        return ans;

    }
};