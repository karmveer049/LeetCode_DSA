//PROBLEM DESCRIPTION
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000

//CPP CODE HERE
public:
    void loRec(TreeNode* root, int level, vector<vector<int>> &res){
        if (root==nullptr) return ;
        if (res.size()<=level) res.push_back({});
        res[level].push_back(root->val);
        loRec(root->left,level+1,res);
        loRec(root->right,level+1,res);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        loRec(root,0,res);
        return res;
    }
