class Solution {
public:
    vector<int> res;
    void fun(TreeNode* root){
        if(root==NULL) return;
        res.push_back(root->val);
        fun(root->left);
        fun(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        fun(root);
        return res;
    }
};