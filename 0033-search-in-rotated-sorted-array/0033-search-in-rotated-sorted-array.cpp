class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int guess=(low+high)/2;
            if(nums[guess]==target) return guess;
            if(nums[guess]>nums[n-1]){
                //part1
                if(nums[guess]<target) low=guess+1;//right
                else{
                    if(nums[0]>target) low=guess+1;//right
                    else high=guess-1;//left
                }
                continue;
            }
            
                //part2
            if(nums[guess]>target) high=guess-1;//left
            else{
                if(nums[n-1]<target) high=guess-1;//left
                else low=guess+1;//right
                }
            
        }
        return -1;
    }
};