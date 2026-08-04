class Solution {
public:
    bool helper(TreeNode* le,TreeNode* ri){
        if(le==NULL&&ri==NULL) return true;
        if(le==NULL||ri==NULL||le->val!=ri->val) return false;
        return helper(le->left,ri->right)&&helper(le->right,ri->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root!=NULL) return helper(root->left,root->right);
        return true;
    }
};