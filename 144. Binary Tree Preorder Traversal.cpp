//CPP CODE HERE
class Solution {
public:
    void poRec(TreeNode* root,vector<int> &res){
        if(!root) return;
        res.push_back(root->val);
        poRec(root->left,res);
        poRec(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        poRec(root,res);
        return res;
    }
};
