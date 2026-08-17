class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int l=1,r=0;
        vector<vector<int>> res;
        bool LeftToRight=true;
        queue<TreeNode*> q;
        q.push(root);

        if(root==NULL) return res;

        while(!q.empty()){
            int lvlsize=q.size();
            vector<int> tmp;

            while(lvlsize--){
                TreeNode* t=q.front();
                q.pop();
                tmp.push_back(t->val);
                
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);

            }
            if(!LeftToRight) reverse(tmp.begin(),tmp.end());
                
            res.push_back(tmp);
            LeftToRight=!LeftToRight;
        }
        return res;

    }
};