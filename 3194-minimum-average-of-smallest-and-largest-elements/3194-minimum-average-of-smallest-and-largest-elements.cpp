class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double res=INT_MAX;
        int i=0,j=nums.size()-1;
        while(i<j){
            double sum=(nums[i]+nums[j])/2.0;
            res=min(res,sum);
            i++;
            j--;
        }
        return res;
    }
};