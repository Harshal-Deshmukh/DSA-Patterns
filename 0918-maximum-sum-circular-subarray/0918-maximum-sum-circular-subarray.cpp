class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = nums[0];
        int min_sum = nums[0];
        int best_max = nums[0];
        int best_min = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            best_max = max(nums[i],best_max+nums[i]);
            max_sum = max(max_sum,best_max);
            best_min = min(nums[i],best_min+nums[i]);
            min_sum = min(min_sum,best_min);
            sum+=nums[i];
        }
        if(max_sum<0) return max_sum;
        return max(max_sum,sum-min_sum);
    }
};