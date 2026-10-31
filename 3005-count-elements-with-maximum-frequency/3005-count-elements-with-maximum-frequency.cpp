class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int freq=0,maxi=-1;
        for(auto i:mp){
            if(i.second>maxi){
                maxi=i.second;
                freq=maxi;
            }
            else if(i.second==maxi){
                freq+=i.second;
            }
        }
        return freq;
    }
};