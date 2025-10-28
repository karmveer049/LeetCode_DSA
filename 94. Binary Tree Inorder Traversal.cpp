//CPP CODE HERE
class Solution {
public:
    void ioRec(TreeNode* root,vector<int> &res){
        if(!root) return;
        ioRec(root->left,res);
        res.push_back(root->val);
        ioRec(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        ioRec(root,res);
        return res;
    }
};
