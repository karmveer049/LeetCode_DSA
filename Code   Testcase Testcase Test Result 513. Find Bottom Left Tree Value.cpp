public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=root->val;
        while(!q.empty()){
             TreeNode* node = q.front();
            q.pop();
            ans = node->val;  
            if (node->right) q.push(node->right);
            if (node->left)  q.push(node->left);
        }
        return ans;
    }
