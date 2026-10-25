class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini=INT_MAX,maxi=-1,sec_max=-1;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            if(nums[i]>sec_max && nums[i]>maxi){
                if(maxi!=-1) sec_max=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>sec_max && nums[i]<maxi){
                sec_max=nums[i];
            }
        }
        if(maxi!=sec_max && mini!=sec_max) return sec_max;
        return -1;
    }
};