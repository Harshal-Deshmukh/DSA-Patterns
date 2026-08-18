class Solution {
public:
    vector<int> res;
    void fun(TreeNode* root){
        if(root==NULL) return;
        fun(root->left);
        res.push_back(root->val);
        fun(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        fun(root);
        return res;

    }
};