class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }

private:
    int helper(TreeNode* node, int currentNumber) {
        if (node == nullptr) return 0;
        
        currentNumber = currentNumber * 10 + node->val;
        
        if (node->left == nullptr && node->right == nullptr)
            return currentNumber;
        
        return helper(node->left, currentNumber) + helper(node->right, currentNumber);
    }
};