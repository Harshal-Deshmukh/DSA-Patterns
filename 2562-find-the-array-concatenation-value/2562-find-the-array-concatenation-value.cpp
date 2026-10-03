class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j){
            string s=to_string(nums[i])+to_string(nums[j]);
            sum+=stoi(s);
            i++;
            j--;
        }
        if(i==j) return sum+nums[i];
        return sum;
    }
};