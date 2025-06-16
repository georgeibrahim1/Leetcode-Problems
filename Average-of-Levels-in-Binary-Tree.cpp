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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back({(double)root->val});
        int last_level = 0;
        while(!q.empty())
        {
            int sz = q.size();
            vector<double> v;
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
                long double sum = accumulate(v.begin(),v.end(),0.0L); //<- I hate number limits
                double shit = sum / v.size();  
                ans.push_back(shit);
            }
        }

        return ans;
    }
};