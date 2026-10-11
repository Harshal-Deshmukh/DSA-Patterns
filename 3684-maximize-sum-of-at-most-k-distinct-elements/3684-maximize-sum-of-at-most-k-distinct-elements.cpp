class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size() && !k==0){
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            res.push_back(nums[i]);
            i++;
            k--;
        }
        return res;
    }
};