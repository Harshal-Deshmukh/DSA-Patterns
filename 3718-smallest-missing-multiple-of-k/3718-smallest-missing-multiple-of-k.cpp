class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        int i=1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        while(1){
            if(mp.find(k*i)==mp.end()){
                ans=k*i;
                break;
            }
            i++;
        }
        return ans;
    }
};