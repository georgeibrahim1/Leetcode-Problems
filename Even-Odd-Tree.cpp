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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        if(root->val % 2 == 0) return false;
        int last_level = 1;
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
            if(last_level % 2 == 0)
            {
                for(int i = 0 ; i < v.size() ;i++)
                {
                    if(v[i] % 2 == 0 || ( i>0 && v[i-1] >= v[i]) )
                    {
                        return false;
                    }
                }
            }
            else
            {
                for(int i = 0 ; i < v.size() ;i++)
                {
                    if(v[i] % 2 != 0 || ( i>0 && v[i-1] <= v[i]) )
                    {
                        return false;
                    }
                }
            }

            last_level++;

        }

        return true;
    }
};