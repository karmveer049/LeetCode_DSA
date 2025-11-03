public:
    void search(TreeNode* root, int k, vector<int> & arr){
        if(!root) return;
        arr.push_back(root->val);
        if(root->left) search(root->left,k,arr);
        if(root->right) search(root->right,k, arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        search(root,k,arr);
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
