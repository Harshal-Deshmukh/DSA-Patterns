class Solution {
public:
    int kadane(vector<int> &diff){
        int curr=0;
        int best=0;
        for(auto i: diff){
            curr+=i;
            best=max(best,curr);
            if(curr<0) curr=0;
        }
        return best;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>diff1,diff2;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=nums1[i];
            sum2+=nums2[i];
            diff1.push_back(nums2[i]-nums1[i]);
            diff2.push_back(nums1[i]-nums2[i]);
        }
        int gain1=kadane(diff1);
        int gain2=kadane(diff2);
        return max((sum1+gain1),(sum2+gain2));
    }
};