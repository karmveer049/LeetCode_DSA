public:
    bool bst(TreeNode* root, long long min, long long max){
        if(!root) return true;
        if(root->val<=min||root->val>=max) return false;
        return bst(root->left, min, root->val)&&bst(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        long long min=(long long)INT_MIN-1;
        long long max=(long long)INT_MAX+1;
        return bst(root,min, max);
    }
