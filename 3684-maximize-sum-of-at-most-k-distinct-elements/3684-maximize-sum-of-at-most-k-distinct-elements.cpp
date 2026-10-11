class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i:mp){
            nums.push_back(i.first);
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
            k--;
            if(k==0) break;
        }
        return res;

    }
};