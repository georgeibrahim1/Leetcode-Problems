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
    vector<TreeNode*> generateTrees(int n) {
        return rec_generate(1,n);
    }

    vector<TreeNode*> rec_generate(int s ,int l)
    {
        vector<TreeNode*> allTrees;
        if(s>l)
        {
            allTrees.push_back(nullptr);
            return allTrees;
        }

        for(int i = s ; i <= l ; i++)
        {
            vector<TreeNode*> leftTrees = rec_generate(s, i - 1);
            vector<TreeNode*> rightTrees = rec_generate(i + 1, l);

            for (TreeNode* left : leftTrees) {
                            for (TreeNode* right : rightTrees) {
                                TreeNode* root = new TreeNode(i);
                                root->left = left;
                                root->right = right;
                                allTrees.push_back(root);
                            }
                        }
        }

        return allTrees;
    }

    long long m_c_n(int m , int n)
    {
        if (n > m) return 0;
        if (n > m - n) n = m - n;  // Take advantage of symmetry

        // (m * m-1 * ... * m-n+1) / (1*2*3*4*...*n)
        long long res = 1;
        for (int i = 1; i <= n; ++i) {
            res *= (m - i + 1);
            res /= i;
        }
        return res;
    }
};