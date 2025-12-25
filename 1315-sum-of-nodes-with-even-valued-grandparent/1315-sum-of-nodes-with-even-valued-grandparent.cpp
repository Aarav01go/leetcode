/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, int p , int gp){
        if(root==NULL){
            return 0;
        }
        if(gp%2==0) 
            return root->val+dfs(root->left,root->val, p)+dfs(root->right,root->val,p);
        return dfs(root->left,root->val,p)+dfs(root->right,root->val,p);
    }
    int sumEvenGrandparent(TreeNode* root) {
        return dfs ( root, 1,1);
    }
};

