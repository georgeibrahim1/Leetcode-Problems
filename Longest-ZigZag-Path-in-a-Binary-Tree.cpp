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
    //thx chatgpt
   int maxLen = 0;

    int longestZigZag(TreeNode* root) {
        if (!root) return 0;
        dfs(root->left, true, 1);
        dfs(root->right, false, 1); 
        return maxLen;
    }

    void dfs(TreeNode* node, bool cameFromLeft, int length) {
        if (!node) return;

        maxLen = max(maxLen, length);

        if (cameFromLeft) {
            dfs(node->right, false, length + 1);
            dfs(node->left, true, 1);            
        } else {
            dfs(node->left, true, length + 1);   
            dfs(node->right, false, 1);          
        }
    }

};