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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back({root->val});
        int last_level = 0;
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> v;
            for(int i = 0 ; i < sz ;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                    v.push_back(node->left->val);
                }
                if(node->right)
                {
                    q.push(node->right);
                    v.push_back(node->right->val);
                }
            }
            last_level++;
            if(!v.empty())
            {
                ans.push_back(v);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};