class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int freq=0,maxi=-1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi){
                maxi=mp[nums[i]];
                freq=maxi;
            }
            else if(mp[nums[i]]==maxi){
                freq+=mp[nums[i]];
            }
        }
        
        
        return freq;
    }
};