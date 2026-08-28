class Solution {
public:
    stack< TreeNode*> asc;
    stack< TreeNode*> dsc;

    TreeNode* getsmall(){
        if(asc.empty()) return NULL;

        TreeNode* small=asc.top();
        asc.pop();

        TreeNode* rightchild=small->right;

        while(rightchild){
            asc.push(rightchild);
            rightchild=rightchild->left;
        }
        return small;
    }

    TreeNode* getbig(){
        if(dsc.empty()) return NULL;

        TreeNode* big=dsc.top();
        dsc.pop();

        TreeNode* leftchild=big->left;

        while(leftchild){
            dsc.push(leftchild);
            leftchild=leftchild->right;
        }
        return big;
    }

    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;

        TreeNode* t=root;

        while(t){
            asc.push(t);
            t=t->left;
        }
        t=root;

        while(t){
            dsc.push(t);
            t=t->right;
        }

        TreeNode* i=getsmall();
        TreeNode* j=getbig();

        while(i && j && i!=j && i->val <= j->val){
            int sum=i->val+j->val;
            if(sum==k) return true;
            if(sum>k) j=getbig();
            else i=getsmall();
        }
        return false;
    }
};