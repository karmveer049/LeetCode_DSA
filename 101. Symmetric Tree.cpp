//CPP CODE HERE
class Solution {
public:
    bool symRec(TreeNode* tl, TreeNode* tr){
        if(!tl&&!tr) return true;
        if(!tl||!tr) return false;
        return (tl->val==tr->val)&&
        symRec(tl->left,tr->right)&&
        symRec(tl->right,tr->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return symRec(root->left,root->right);
    }
};
