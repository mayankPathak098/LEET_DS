class Solution {
public:
    
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec1,vec2;
        for(int i=0;i<n;i++){
            if(nums[i]<0) vec1.push_back(nums[i]); // vec1= -ve value
            else vec2.push_back(nums[i]);  //vec2= +ve value
        }
        for(int i=n-1;i>=0;i--){
            if(i%2!=0){//odd = -ve
                nums[i]=vec1.back();
                vec1.pop_back();
            }else{
                nums[i]=vec2.back();
                vec2.pop_back();
            }
        }
        return nums;

    }
};