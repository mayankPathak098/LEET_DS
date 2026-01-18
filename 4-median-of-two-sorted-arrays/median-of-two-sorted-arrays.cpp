class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int n=num1.size();
        int m=num2.size();
        vector<int>vec(n+m,0);
        double ans;
        for(int i=0;i<n;i++){
            vec[i]=num1[i];
        }
        for(int i=n;i<n+m;i++){
            vec[i]=num2[i-n];
        }//2=0 3=1
        sort(vec.begin(),vec.end());
        int k=vec.size()/2;
        if(vec.size()%2==0){
            ans=(vec[k]+vec[k-1])/2.0;
            }
        else ans=vec[k];

        return ans;



    }
};