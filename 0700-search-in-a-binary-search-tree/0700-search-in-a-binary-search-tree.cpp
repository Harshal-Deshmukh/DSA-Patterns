class Solution {
public:
    TreeNode* ans;
    void fun(TreeNode* root, int val){
        if(root == NULL) return;
        if(root->val==val) ans=root;
        else if(root->val>val) fun(root->left,val);
        else fun(root->right,val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        fun(root,val);
        if(ans != NULL)return ans;
        return NULL;
    }
};