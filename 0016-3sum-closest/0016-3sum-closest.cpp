class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        for(int i = 0;i<n-2;i++){
            int first = nums[i];
            int left=i+1;
            int right=n-1;
            while(left<right){
            int sum = first + nums[left] + nums[right];
            if(abs(target-sum)<abs(target-closest)){
                closest=sum;
            }
            if(target>sum){
                left++;
            }
            else if(target<sum){
                right--;
            }
            else{
                return sum;
            }
            }
        }
        return closest;
    }
};