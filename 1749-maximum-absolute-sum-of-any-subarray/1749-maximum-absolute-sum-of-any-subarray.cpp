class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best_end_min = nums[0];
        int best_end_max = nums[0];
        int min_sum = nums[0];
        int max_sum = nums[0];
        int res;
        for(int i=1;i<nums.size();i++){
            best_end_min = min(nums[i],best_end_min + nums[i]);
            min_sum = min(min_sum,best_end_min);
            best_end_max = max(nums[i],best_end_max + nums[i]);
            max_sum = max(max_sum,best_end_max); 
            
        }

        return max(abs(min_sum),max_sum);
    }
};