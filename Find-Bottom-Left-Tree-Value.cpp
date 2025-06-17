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
    int max_depth = -1;
    int leftMax;
    int findBottomLeftValue(TreeNode* root) {
        //BFS is fucking easy
        // queue<TreeNode*> q;
        // q.push(root);
        // int k = root->val;
        // while(!q.empty())
        // {
        //     int sz = q.size();
        //     vector<int> v;
        //     for(int i = 0 ; i < sz ;i++)
        //     {
        //         TreeNode* node = q.front();
        //         q.pop();
        //         if(node->left)
        //         {
        //             q.push(node->left);
        //             v.push_back(node->left->val);
        //         }
        //         if(node->right)
        //         {
        //             q.push(node->right);
        //             v.push_back(node->right->val);
        //         }
        //     }

        //     if(!v.empty()) k = v[0];
        // }

        // return k;
        dfs(root,0);
        return leftMax;
    }

    void dfs(TreeNode* node , int depth)
    {
        if(!node) return;
        if(depth > max_depth)
        {
            max_depth = depth;
            leftMax = node->val; 
        }

        dfs(node->left,depth+1);
        dfs(node->right,depth+1);
    }
};