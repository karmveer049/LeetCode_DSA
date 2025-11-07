 TreeNode* minNode(TreeNode* root){
        while(root&&root->left) root=root->left;
        return root; 
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(key>root->val){
           root->right= deleteNode(root->right,key);
        }
        else if(key<root->val){
           root->left= deleteNode(root->left,key);
        }
        else{
            if(!root->left&&!root->right) return nullptr;
            if(!root->left){
                TreeNode* r=root->right;
                delete root;
                return r;
            }
            if(!root->right){
                TreeNode* l=root->left;
                delete root;
                return l;
            }
            else{
                TreeNode* succ=minNode(root->right);
                root->val=succ->val;
               root->right= deleteNode(root->right,succ->val);
            }
        }
        return root;
    }
