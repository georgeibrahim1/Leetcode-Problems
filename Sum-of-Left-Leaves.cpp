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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root && !root->left && !root->right) return 0;
        
        return rec_sum(root);
    }

    int rec_sum(TreeNode* node)
    {
        if(!node) return 0;
        if(node->left && !node->left->left && !node->left->right) return node->left->val+rec_sum(node->left) + rec_sum(node->right);
        return rec_sum(node->left) + rec_sum(node->right);

    }
};