class Solution {
public:
    string sum="";
    int ans=0;
    void fun(TreeNode* root, string sum){
        if (root==NULL) return;
        sum+=to_string(root->val);

        if(root->left==NULL && root->right==NULL){
            ans+= stoi(sum);
            sum="";
        }
        fun(root->left,sum);
        fun(root->right,sum);
    }
    int sumNumbers(TreeNode* root) {
        fun(root,"");
        return ans;
    }
};