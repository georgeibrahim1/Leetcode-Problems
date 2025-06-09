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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root && !root->left && !root->right) return (root->val == targetSum);

        return rec_PathSum(root,0,targetSum);
    }

    bool rec_PathSum(TreeNode* node , int currSum , int targetSum)
    {
        if(!node) return false;
        if(!node->left && !node->right)
        {
            return ( (currSum + node->val) == targetSum);
        }

        bool left_check = rec_PathSum(node->left,currSum + node->val,targetSum);
        bool right_check = rec_PathSum(node->right,currSum + node->val,targetSum);

        return left_check || right_check;
    }
};