class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,count=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];  
            int prefix=sum-goal;
            if(map.find(prefix)!=map.end()) count+=map[prefix]; 
            map[sum]++;
        }
        return count;
    }
};