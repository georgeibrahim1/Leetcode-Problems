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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        if(root && !root->left && !root->right) return 1;

        return rec_max(root);
    }

    int rec_max(TreeNode* node)
    {
        if(!node) return 0;

        int left_depth = rec_max(node->left);
        int right_depth = rec_max(node->right);

        if(left_depth >= right_depth)
            return left_depth + 1;
        else
            return right_depth + 1;
    }
};