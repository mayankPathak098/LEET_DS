class Solution {
public:
/*    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(nums[i]>0) vec.push_back(nums[i]);
        }
        int maxx=-1;
        n=vec.size();
        for(int i=0;i<n;i++){
            if(find(nums.begin(),nums.end(),(-1*vec[i]) ) != nums.end() ){//found
                maxx=max(maxx,vec[i]);
            }
        }
        return maxx;
    }
*/
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first=0,last=nums.size()-1;
        while(first<last){
            if(nums[first]+nums[last]==0){
                return nums[last];
            }else if(nums[first]+nums[last]>0){
                last--;
            }else{
                first++;
            }
        }
        return -1;
    }
};