class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,low=0,high=0;
        int res=INT_MAX;
        int n=nums.size();
        while(high<n){
            sum+=nums[high];
            while(sum>=target){
                int length=high-low+1;
                res=min(res,length);
                sum-= nums[low];
                low++;
            }
            high++;
        }
        if(res==INT_MAX){
            return 0;
        }
        return res;
    }
};