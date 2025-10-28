//CPP CODE HERE
class Solution {
public:
    void rvRec(TreeNode* root,int level,vector<int>&res){
        if(!root) return;
        if(level==res.size()) res.push_back(root->val);
        rvRec(root->right,level+1,res);
        rvRec(root->left,level+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        rvRec(root,0,res);
        return res;
    }
};
