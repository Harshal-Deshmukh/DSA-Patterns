class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> res;
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
           mp.insert(nums[i]);
        }
        nums.clear();
        for(auto i:mp){
            nums.push_back(i);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
            k--;
            if(k==0) break;
        }
        return res;

    }
};