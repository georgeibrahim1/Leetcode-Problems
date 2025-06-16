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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return rec_balance(root); 
    }

    bool rec_balance(TreeNode* node)
    {
        if(!node) return true;
        int l = max_depth(node->left);
        int r = max_depth(node->right);
        bool re = (l-r == 0 || l-r == 1 || l-r == -1)? true : false;
        return (re && rec_balance(node->left) && rec_balance(node->right)); 
    }

    int max_depth(TreeNode* node)
    {
        if(!node) return 0;
        int l = max_depth(node->left);
        int r = max_depth(node->right);
        return 1 +max(l,r);
    }
};