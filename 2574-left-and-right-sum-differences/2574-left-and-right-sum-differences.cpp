class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> Lsum,Rsum;
        vector<int> res;
        int left=0,right=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            Lsum.push_back(left);
            left+=nums[i];
            Rsum.push_back(right);
            right+=nums[n-i];
        }
        reverse(Rsum.begin(),Rsum.end());
        for(int i=0;i<nums.size();i++){
            res.push_back(abs(Lsum[i]-Rsum[i]));
        }
        return res;
    }
};