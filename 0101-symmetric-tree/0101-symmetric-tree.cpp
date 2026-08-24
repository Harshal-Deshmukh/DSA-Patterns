class Solution {
public:
    bool fun(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;

        bool r1=fun(p->left,q->right);
        bool r2=fun(p->right,q->left);

        if(r1==true && r2==true) return true;
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        TreeNode*p=root->left;
        TreeNode*q=root->right;
        return fun(p,q);
        
    }
};