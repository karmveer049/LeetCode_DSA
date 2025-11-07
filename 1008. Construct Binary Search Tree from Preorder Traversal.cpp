 TreeNode* treePre(vector<int>& preorder,int size,int &idx, int min, int max){
        if(idx>=size) return nullptr;
        int key=preorder[idx];
        if(key<min||key>max) return nullptr;
        TreeNode* root=new TreeNode(key);
        idx++;
        if(idx<size){
            root->left=treePre(preorder,size,idx,min,key);
            root->right=treePre(preorder,size,idx,key,max);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size=preorder.size();
        int idx=0;
        return treePre(preorder,size,idx,INT_MIN,INT_MAX);
    }
