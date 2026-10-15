class Solution {
public:
    int best = INT_MIN;

    int helper(TreeNode* node) {
        if (!node) return 0;
        int left  = max(0, helper(node->left));
        int right = max(0, helper(node->right));
        best = max(best, node->val + left + right);
        return node->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        helper(root);
        return best;
    }
};