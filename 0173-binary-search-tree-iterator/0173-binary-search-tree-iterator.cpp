class BSTIterator {
    stack<TreeNode*> st;
    void pushLeft(TreeNode* node) {
        while (node) { st.push(node); node = node->left; }
    }
public:
    BSTIterator(TreeNode* root) { pushLeft(root); }
    int next() {
        TreeNode* top = st.top(); st.pop();
        pushLeft(top->right);
        return top->val;
    }
    bool hasNext() { return !st.empty(); }
};