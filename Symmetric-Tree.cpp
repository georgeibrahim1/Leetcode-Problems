/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) { 
        //BFS Solution beats 100% :33

        if(root && !root->left && root->right) return false;
        if(root && root->left && !root->right) return false;
        if(root && root->left && root->right && !root->left->left && !root->left->right && 
            !root->right->left && !root->right->right) return root->left->val==root->right->val;       
        // bool ans = true;
        // queue<TreeNode*> q;
        // q.push(root);
        // int last_level = 0;
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
        //         else
        //         {
        //             v.push_back(-101);
        //         }

        //         if(node->right)
        //         {
        //             q.push(node->right);
        //             v.push_back(node->right->val);
        //         }
        //         else
        //         {
        //             v.push_back(-101);
        //         }
        //     }
        //     last_level++;
        //     for (int i = 0; i < v.size() / 2; i++) {
        //         if (v[i] != v[v.size() - 1 - i]) {
        //             return false; // early return on mismatch
        //         }
        //     }   
        // }

        // return ans;

        //DFS Solution
        return dfs(root,root);
    }

    bool dfs(TreeNode* node1 , TreeNode* node2)
    {
        if(!node1 && !node2) return true;
        if(!node1 || !node2) return false;

        if(node1->val == node2->val)
        {
            return true && dfs(node1->left,node2->right) && dfs(node1->right,node2->left);
        }

        return false;
    }
};