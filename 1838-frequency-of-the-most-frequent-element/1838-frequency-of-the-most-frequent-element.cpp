class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=(n>0)? 1:0;
        int low=0,high=1;
        long long ops=0;
        sort(nums.begin(),nums.end());
        while(high<n){
            int target =nums[high];
            ops+=(long long)(high-low)*(nums[high]-nums[high-1]);;
            while(ops>k){    
                ops-=nums[high]-nums[low];
                low++;
            }
                int len=high-low+1;
                max_len=max(len,max_len);
                high++;
        }
        return max_len;
    }
};