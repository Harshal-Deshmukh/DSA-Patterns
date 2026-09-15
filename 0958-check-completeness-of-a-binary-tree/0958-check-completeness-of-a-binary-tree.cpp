
class Solution {
public:
    bool fun(TreeNode *root){
        bool nullFound=false;

        if(root==NULL) return true;

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()){
            TreeNode *t=q.front();
            q.pop();
            if(t==NULL) nullFound=true;
            else{
                if(nullFound) return false;
                q.push(t->left);
                q.push(t->right);
            }
        }
        return true;

    }
    bool isCompleteTree(TreeNode* root) {
        return fun(root);
    }
};