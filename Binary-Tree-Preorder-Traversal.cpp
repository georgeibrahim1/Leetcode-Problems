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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> motherfucker;

        if(!root) return motherfucker;
        if(root && !root->right && !root->left)
        {
            motherfucker.push_back(root->val);
            return motherfucker;
        }
        
        //initial
        if(root->right)
        {
            s.push(root->right);
        } 

        if(root->left)
        {
            s.push(root->left);
        } 

        s.push(root);

        while(!s.empty())
        {
            TreeNode* pass = s.top();
            if(!pass->right && !pass->left)
            {
                motherfucker.push_back(pass->val);
                s.pop();
            }
            else if(pass->right && pass->left)
            {
                s.pop();
                if(s.empty())
                {
                    s.push(pass->right);
                    s.push(pass->left);
                    s.push(pass);                   
                }
                else if(!s.empty() && s.top() != pass->left)
                {
                    s.push(pass->right);
                    s.push(pass->left);
                    s.push(pass);   
                }
                else
                {
                    motherfucker.push_back(pass->val);
                }
            }
            else if(pass->right)
            {
                s.pop();
                if(s.empty())
                {
                    s.push(pass->right);
                    s.push(pass);             
                }
                else if(!s.empty() && s.top() != pass->right)
                {
                    s.push(pass->right);
                    s.push(pass);
                }
                else
                {
                    motherfucker.push_back(pass->val);       
                }
            }
            else if(pass->left)
            {
                s.pop();
                if(s.empty())
                {
                    s.push(pass->left);
                    s.push(pass);             
                }
                else if(!s.empty() && s.top() != pass->left)
                {
                    s.push(pass->left);
                    s.push(pass);
                }
                else
                {
                    motherfucker.push_back(pass->val);       
                }
            }
        }

        return motherfucker;
    }
};