/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        // if(!root) return false;
        // if(root && !root->left && !root->right) return (root->val == targetSum);

        vector<vector<int>> paths;
        vector<int> curr;
        rec_PathSum(root,paths,curr,0,targetSum);
        return paths;
    }  

    void rec_PathSum(TreeNode* node ,vector<vector<int>>& paths ,vector<int>& currPath, int currSum , int targetSum)
    {
        if(!node) return ;

        currPath.push_back(node->val);

        if(!node->left && !node->right)
        {
            if( (currSum + node->val) == targetSum)
            {
                paths.push_back(currPath);
            }
        }

        rec_PathSum(node->left,paths,currPath,currSum + node->val,targetSum);
        rec_PathSum(node->right,paths,currPath,currSum + node->val,targetSum);

        currPath.pop_back();
    }
};