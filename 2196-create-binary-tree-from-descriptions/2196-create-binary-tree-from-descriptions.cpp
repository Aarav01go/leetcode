class Solution {
    unordered_map<int, TreeNode*> map;
    unordered_set<int> kids;

public:
    TreeNode* find(int v) {
        if (!map.count(v)) {
            map[v] = new TreeNode(v);
        }
        return map[v];
    }

    void make(int p, int c, int l) {
        if (l) {
            find(p)->left = find(c);
        } else {
            find(p)->right = find(c);
        }
        kids.insert(c);
    }

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        for (auto& d : descriptions) {
            make(d[0], d[1], d[2]);
        }
        
        for (auto& d : descriptions) {
            if (!kids.count(d[0])) {
                return map[d[0]];
            }
        }
        
        return nullptr;
    }
};