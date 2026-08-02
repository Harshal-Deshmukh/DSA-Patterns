class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0, res=0;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0){
                res=max(res,i+1);
                continue;
            }
            if(map.find(rem)==map.end()) map[rem]=i;
            else{
                int idx=map[rem];
                int len=i-idx;
                res=max(len,res);
            }
        }
        if(res<2) return false;
        return true;
    }
};