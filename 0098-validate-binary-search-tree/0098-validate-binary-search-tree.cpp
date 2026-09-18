class Solution {
public:
    TreeNode *prev=NULL;
    bool res=true;
    void inorder(TreeNode *root){
        
        if(root==NULL) return;
        inorder(root->left);
        
        if(prev==NULL) prev=root;
        else{
            if(prev->val >= root->val) res=false;
            prev=root;
        }
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return res;
    }
};