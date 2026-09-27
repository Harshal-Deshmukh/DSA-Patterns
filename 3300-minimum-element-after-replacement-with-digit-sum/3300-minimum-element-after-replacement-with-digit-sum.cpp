class Solution {
public:
    int minElement(vector<int>& nums) {
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i],sum=0;
            while(n!=0){
                sum+=n%10;
                n=n/10;
            }
            res=min(res,sum);
        }
        return res;
    }
};