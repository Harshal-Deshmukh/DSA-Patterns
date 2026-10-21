class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            freq+=mp[nums[i]];
            mp[nums[i]]++;
            
        }
        return freq;
    }
};