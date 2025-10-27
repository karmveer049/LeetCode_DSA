//CPP CODE HERE
public:
int maxd=0;
    int dobtRec(TreeNode* root){
        if(!root) return 0;
        int lheight=dobtRec(root->left);
        int rheight=dobtRec(root->right);
        if(lheight+rheight>maxd) maxd=lheight+rheight;
        return 1+max(lheight,rheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxd=0;
        dobtRec(root);
        return maxd;
    }
