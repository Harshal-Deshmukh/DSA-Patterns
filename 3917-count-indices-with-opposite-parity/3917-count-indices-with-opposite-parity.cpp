class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int even_cnt=0,odd_cnt=0;
        vector<int> res;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]%2==0){
                even_cnt++;
                res.push_back(odd_cnt);
            } 
            else{
                odd_cnt++;
                res.push_back(even_cnt);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};