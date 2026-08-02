class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero=0,one=0,res=0,sum=0;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]==0){
                zero++;
            }
            else{
                one++;
            }
            int diff=zero-one;
            if(diff==0){
                res = max(res,i+1);
                continue;
            }
            if(map.find(diff)==map.end()){
                 map[diff]=i;
            }
            else{
                int idx = map[diff];
                int len = i-idx;
                res=max(res,len);
            }

        }
        return res;
    }
};