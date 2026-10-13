class Solution {
public:
    bool checkBST(TreeNode* root, long long mn, long long mx) {
        if (root == nullptr) return true;
        if (root->val <= mn || root->val >= mx) return false;
        return checkBST(root->left, mn, root->val) &&checkBST(root->right, root->val, mx);
    }
    bool isValidBST(TreeNode* root) {
        return checkBST(root, LLONG_MIN, LLONG_MAX);
    }
};