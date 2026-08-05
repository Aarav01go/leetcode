class Solution {
public:
    bool solve(TreeNode* root, int targetSum, int sum) {
        if (root->left==NULL && root->right==NULL) return sum==targetSum;
        else if (root->left==NULL) return solve(root->right, targetSum, sum+root->right->val);
        else if (root->right==NULL) return solve(root->left, targetSum, sum+root->left->val);
        else return solve(root->left, targetSum, sum+root->left->val) || solve(root->right, targetSum, sum+root->right->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL) return false;
        return solve(root, targetSum, root->val);
    }
};