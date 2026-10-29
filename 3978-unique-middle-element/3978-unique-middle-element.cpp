class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int cnt=0;
        int mid_pos=(nums.size()-1)/2;
        int mid=nums[mid_pos];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mid) cnt++;
        }
        if(cnt==1) return true;
        return false;
    }
};