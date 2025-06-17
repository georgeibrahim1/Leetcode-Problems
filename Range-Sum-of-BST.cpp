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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        rec_sum(root,low,high);
        return sum;   
    }

    void rec_sum(TreeNode* node,int low , int high) {
        if(!node) return;
        if(node->val > high) {
            rec_sum(node->left,low,high);
        }
        else if(node->val < low) {
            rec_sum(node->right,low,high);
        }
        else if(node->val >= high) {
            sum+=node->val;
            rec_sum(node->left,low,high);
        }
        else if(node->val <= low) {
            sum+=node->val;
            rec_sum(node->right,low,high);
        }
        else if(node->val < high && node->val > low)
        {
            sum+= node->val;
            rec_sum(node->left,low,high);
            rec_sum(node->right,low,high);
        }
    }   
};