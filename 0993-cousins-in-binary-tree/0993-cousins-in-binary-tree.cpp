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
    TreeNode* px=NULL;
    TreeNode* py=NULL;
    int dx=-1,dy=-1;


    void check (TreeNode* root,TreeNode* parent, int l,int x, int y){
        if(!root) return;
        if(root->val==x){
            dx=l;
            px=parent;
        }
        if(root->val==y){
            dy=l;
            py=parent;
        }
        check(root->left,root,l+1,x,y);
        check(root->right,root,l+1,x,y);

    }
    bool isCousins(TreeNode* root, int x, int y) {
        check(root,NULL,0,x,y);
        return(dx==dy&&px!=py);
    }
};