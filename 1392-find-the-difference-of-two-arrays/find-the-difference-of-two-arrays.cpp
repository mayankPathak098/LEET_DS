class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        int n1=nums1.size(),n2=nums2.size();
        
        //for NUMS1
        for(int i=0;i<n1;i++){
            if( (find(nums2.begin(),nums2.end(),nums1[i]) == nums2.end()) && find(ans[0].begin(),ans[0].end(),nums1[i]) == ans[0].end() ){// NOT found
                ans[0].push_back(nums1[i]);
            }
        }

        //for NUMS2
        for(int i=0;i<n2;i++){
            if( (find(nums1.begin(),nums1.end(),nums2[i]) == nums1.end()) && find(ans[1].begin(),ans[1].end(),nums2[i]) == ans[1].end() ){// NOT found
                ans[1].push_back(nums2[i]);
            }
        }
        return ans;
    }
};