class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0, high=k-1;
        int sum=0;
        for(int i=0;i<=high;i++){
            sum+=nums[i];
        }
        double res=(double)sum/k;
        while(high<nums.size()){
            double avg=(double)sum/k;
            res=max(res,avg);
            high++;
            if(high<nums.size())sum+=nums[high];
            sum-=nums[low];
            low++;
        }
        return res;    
    }
};