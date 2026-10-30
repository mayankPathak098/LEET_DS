class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;
        sort(nums.begin(),nums.end());
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);

        for(int i=0;i<k;i++){
            int max=pq.top();
            pq.pop();
            score+=max;
            max=ceil(max/3.0);
            pq.push(max);
        }
        return score;
    }
};