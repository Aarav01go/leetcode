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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* T = q.front();
                q.pop();
                if(T->left!=NULL) q.push(T->left);
                if(T->right!=NULL) q.push(T->right);
                level.push_back(T->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};