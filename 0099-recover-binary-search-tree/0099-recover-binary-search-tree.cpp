class Solution {
public:
    int galat=0;
    TreeNode *galat1first=NULL;
    TreeNode *galat1second=NULL;
    TreeNode *galat2first=NULL;
    TreeNode *galat2second=NULL;
    TreeNode *prev=NULL;

    void inorder(TreeNode* root){
        if(root==NULL) return;

        inorder(root->left);

        if(prev==NULL) prev=root;
        else{
            if(root->val <= prev->val){
                if(galat==0){
                    galat1first=prev;
                    galat1second=root;
                    }
                else{
                        galat2first=prev;
                        galat2second=root;
                    }
                galat++;
                }
                prev=root;
            }

        inorder(root->right);
        
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        if(galat==1) swap(galat1first->val,galat1second->val);
        else swap(galat1first->val,galat2second->val);
    }
};