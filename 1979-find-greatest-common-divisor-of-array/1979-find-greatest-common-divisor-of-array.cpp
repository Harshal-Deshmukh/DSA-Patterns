class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=-1;
        int n=mini;
        while(n!=0){
            if(mini%n==0 && maxi%n==0){
                ans=n;
                break;
            }
            n--;
        }
        return ans;
    }
};