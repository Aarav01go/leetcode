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
    vector<double> avg(vector<vector<int>>&v){
        vector<double> db;
        int sz= v.size();
        for(int i=0;i<sz;i++){
            int n=v[i].size();
            double sum =0;
            for(int j=0;j<n;j++){
                sum+=v[i][j];
            }
            db.push_back(sum/n);
        }
        return db;
    }
    vector<double>d(vector<vector<int>>v){
        vector<double>db;
        return db;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return d(ans);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* roo=q.front();
                q.pop();
                if(roo->left!=NULL) q.push(roo->left);
                if(roo->right!=NULL) q.push(roo->right);
                level.push_back(roo->val);
            }
            ans.push_back(level);
        }
        return avg(ans);
    }
};