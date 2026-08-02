class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            v.push_back(curr);
        }
    }
    
    int sumRange(int left, int right) {
        int rightSum=v[right];
        int leftSum;
        if(left>0) leftSum=v[left-1];
        else leftSum=0;
        return rightSum-leftSum;
    }
};

