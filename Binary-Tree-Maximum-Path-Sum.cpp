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
    // to solve it easily , solve [543. Diameter of Binary Tree]
    int maxPathSum(TreeNode* root) {
        int max = INT_MIN;
        int lol = rec_sum(root,max);
        return lol;
    }

    int rec_sum(TreeNode* node,int& lastmax)
    {
        if(!node) return lastmax;
        int l = max(0,maxSum(node->left)); //if <0 ---> 0 
        int r = max(0,maxSum(node->right)); //adding max(0,..) is equavilant to all of these
        int n = node->val + l + r;
        // if(l<0 && r>0 && node->val>0) n = r+node->val;
        // if(l>0 && r<0 && node->val>0) n = l+node->val; 
        // if(l>0 && r>0 && node->val>0) n = l+r+node->val;
        // if(l<0 && r<0 && node->val>0) n = node->val;
        // if(l<0 && r<0 && node->val<0) n = max(l,max(r,node->val));
        // if(l<0 && r>0 && node->val<0) n = r;
        // if(l>0 && r<0 && node->val<0) n = l;
        // if(l>0 && r>0 && node->val<0) n = r+l+node->val;
        lastmax = max(n,lastmax);
        return max(rec_sum(node->left,lastmax), rec_sum(node->right,lastmax));
    }

    int maxSum(TreeNode* node)
    {
        if (!node) return 0;
        int l = max(0,maxSum(node->left));
        int r = max(0,maxSum(node->right));
        return node->val + max(l,r); //general case
    }
};