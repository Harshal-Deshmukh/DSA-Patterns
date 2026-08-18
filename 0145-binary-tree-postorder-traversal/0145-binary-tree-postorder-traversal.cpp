class Solution {
public:
vector<int> res;
    void fun(TreeNode* root){
        if(root==NULL) return;
        fun(root->left);
        fun(root->right);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        fun(root);
        return res;
    }
};