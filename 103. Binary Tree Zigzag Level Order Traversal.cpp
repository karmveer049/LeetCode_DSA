public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        while(!s1.empty()||!s2.empty()){
         //   int level1=s1.size();
         //   int level2=s2.size();
            vector<int> res1;
            vector<int> res2;
            while(!s1.empty()){
                TreeNode* curr=s1.top();
                s1.pop();
                res1.push_back(curr->val);
                if(curr->left) s2.push(curr->left);
                if(curr->right) s2.push(curr->right);

            }
              if(!res1.empty())   ans.push_back(res1);
            while(!s2.empty()){
                TreeNode* curr=s2.top();
                s2.pop();
                res2.push_back(curr->val);
                if(curr->right) s1.push(curr->right);
                if(curr->left) s1.push(curr->left);
                
            }
           if(!res2.empty()) ans.push_back(res2);
        }
        return ans;
        
    }
