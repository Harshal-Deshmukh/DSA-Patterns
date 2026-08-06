class Solution {
public:

    void fun(vector<int> &candidates,int n, int idx,int sum, vector<int> diary, vector<vector<int>> &res, int target){
        
        if(idx==n){//base case
            if(sum==target) res.push_back(diary);
            return;
        }
        
        //choice1 nahi hai
        fun(candidates,n,idx+1,sum,diary,res,target);
        //choice2 ho sakta hai
        if(candidates[idx]+sum<=target){
            sum+=candidates[idx];
            diary.push_back(candidates[idx]);

            fun(candidates,n,idx,sum,diary,res,target);

            diary.pop_back();
            sum-=candidates[idx];
        }
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int idx=0;
        int sum=0;
        vector<int> diary;
        vector<vector<int>> res;
        fun(candidates,n,idx,sum,diary,res,target);
        return res;
    }
};