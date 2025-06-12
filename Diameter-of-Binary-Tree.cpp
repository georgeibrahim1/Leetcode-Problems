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
    int diameterOfBinaryTree(TreeNode* root) {
        int max = INT_MIN;
        int lol = rec_diameter(root,max);
        return max;
    }

    int rec_diameter(TreeNode* node,int& lastmax)
    {
        if(!node) return lastmax;
        int l = maxDepth(node->left);
        int r = maxDepth(node->right);
        lastmax = max(l+r,lastmax);
        return max(rec_diameter(node->left,lastmax), rec_diameter(node->right,lastmax));
    }

    int maxDepth(TreeNode* node)
    {
        if (!node) return 0;
        return 1 + max(maxDepth(node->left), maxDepth(node->right));
    }
};