class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans=-1;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(st.find(-nums[i])!=st.end()){
                ans=max(ans,nums[i]);
            }
        }
        return ans;
    }
};