public:
    int ibRec(TreeNode* root){
        if(!root) return 1;
        int lh=ibRec(root->left);
        int rh=ibRec(root->right);
        if(lh==-1||rh==-1||abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        return (ibRec(root)>0);
    }
