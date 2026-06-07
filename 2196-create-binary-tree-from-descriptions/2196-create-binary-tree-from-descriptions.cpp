class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& desc) {
        unordered_map<int, TreeNode*> m;
        unordered_set<int> kids;

        for (auto& d : desc) {
            int p = d[0];
            int c = d[1];
            int l = d[2];

            if (!m.count(p)) m[p] = new TreeNode(p);
            if (!m.count(c)) m[c] = new TreeNode(c);

            if (l) m[p]->left = m[c];
            else m[p]->right = m[c];

            kids.insert(c);
        }
        
        for (auto& d : desc) {
            if (!kids.count(d[0])) {
                return m[d[0]];
            }
        }
        
        return nullptr;
    }
};