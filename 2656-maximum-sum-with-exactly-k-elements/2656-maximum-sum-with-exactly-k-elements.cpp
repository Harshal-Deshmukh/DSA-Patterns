class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=-1,k_sum=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        for(int i=1;i<k;i++){
            k_sum+=i;
        }
        int res=maxi*k+k_sum;
        return res;
    }
};