//CPP CODE HERE
class Solution {
public:
    void poRec(TreeNode* root, vector<int> &res){
        if(!root) return;
        poRec(root->left,res);
        poRec(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        poRec(root,res);
        return res;
    }
};
