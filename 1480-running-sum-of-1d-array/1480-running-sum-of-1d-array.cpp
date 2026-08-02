class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            v.push_back(curr);
        }
        return v;
    }
};