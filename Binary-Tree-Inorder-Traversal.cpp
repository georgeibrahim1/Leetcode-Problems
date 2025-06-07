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
    vector<int> inorderTraversal(TreeNode* root) {

        stack<TreeNode*> s;
        vector<int> motherfucker;
        unordered_set<TreeNode*> visited;
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

        s.push(root);

        if(root->left)
        {
            s.push(root->left);
        } 

        while(!s.empty())
        {
            TreeNode* pass = s.top();
            if(!pass->right && !pass->left)
            {
                motherfucker.push_back(pass->val);
                visited.insert(pass);
                s.pop();
            }
            else if(pass->right && pass->left)
            {
                s.pop();
                if(s.empty())
                {
                    s.push(pass->right);
                    s.push(pass);
                    s.push(pass->left);                   
                }
                else if(!s.empty() && s.top() != pass->right)
                {
                    s.push(pass->right);
                    s.push(pass);
                    s.push(pass->left);
                }
                else
                {
                    motherfucker.push_back(pass->val);
                    visited.insert(pass);
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
                    visited.insert(pass);        
                }
            }
            else if(pass->left)
            {
                // if(find(motherfucker.begin() , motherfucker.end() , pass->left->val ) != motherfucker.end() )
                if(visited.count(pass->left))
                {
                    motherfucker.push_back(pass->val);
                    visited.insert(pass);
                    s.pop();
                }
                else
                {
                    s.push(pass->left);
                }
            }
        }

        return motherfucker;

        
        
    }
};