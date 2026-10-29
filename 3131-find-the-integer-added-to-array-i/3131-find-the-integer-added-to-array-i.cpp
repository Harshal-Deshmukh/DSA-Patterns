class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        if(nums1.size()!=nums2.size()) return -1;
        for(int i=0;i<nums1.size();i++){
            sum1+=nums1[i];
            sum2+=nums2[i];
        }
        int ans=(sum2-sum1)/(int)nums1.size();
        return ans;
    }
};