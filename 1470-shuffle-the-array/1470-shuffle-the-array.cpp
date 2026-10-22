class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int low=0,high=n;
        while(low!=n){
            res.push_back(nums[low]);
            res.push_back(nums[high]);
            low++;
            high++;
        }
        return res;
    }
};