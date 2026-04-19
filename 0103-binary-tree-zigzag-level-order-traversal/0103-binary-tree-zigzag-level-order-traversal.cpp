class Solution {
public:
    vector<int> reverseVec(vector<int> v){
        int i=0, j=v.size()-1;
        while(i<j){
            swap(v[i],v[j]);
            i++; j--;
        }
        return v;
    }

    vector<vector<int>> zigzag(vector<vector<int>>& v){
        vector<vector<int>> db;
        for(int i=0;i<v.size();i++){
            if(i%2==1) db.push_back(reverseVec(v[i]));
            else db.push_back(v[i]);
        }
        return db;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* t=q.front(); q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                level.push_back(t->val);
            }

            ans.push_back(level);
        }

        return zigzag(ans);
    }
};