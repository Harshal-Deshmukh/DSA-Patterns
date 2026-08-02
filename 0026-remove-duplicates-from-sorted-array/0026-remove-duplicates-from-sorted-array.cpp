class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int officer=0;
int cm=1,res=1;
if(nums.size()==0){
    return 0;
}
while(cm<nums.size()){
    if(nums[cm]==nums[cm-1]){
        cm++;
        continue;
    }
    nums[officer+1]=nums[cm];
    officer++;
    cm++;
    res++;
}
return res;
}
};
