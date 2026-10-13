class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        TreeNode* rt = root;

        while (rt != NULL || !st.empty()) {
            while (rt != NULL) {
                st.push(rt);
                rt = rt->left;
            }

            rt = st.top();
            st.pop();

            k--;
            if (k == 0) return rt->val;

            rt = rt->right;
        }

        return -1;
    }
};