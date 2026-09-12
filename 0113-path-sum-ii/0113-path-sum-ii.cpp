class Solution {
public:
    vector<int> res;
    vector<vector<int>>ans;

    void fun(TreeNode* root, int sum, int targetSum){
        if(root==NULL) return;
        sum+=root->val;
        res.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans.push_back(res);
                
            }
            res.pop_back();
            return;
        }

        fun(root->left,sum,targetSum);
        fun(root->right,sum,targetSum);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        return ans;
    }
};