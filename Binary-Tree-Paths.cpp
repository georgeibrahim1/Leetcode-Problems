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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> o;
        string h;
        rec_Path(root,o,h);
        return o;
    }

    void rec_Path(TreeNode* node ,vector<string>& paths ,string& currPath)
    {
        if(!node) return ;
    
        int prevSize = currPath.size();
        if(!node->left && !node->right)
        {
            string s = to_string(node->val) ;
            currPath += s;
            paths.push_back(currPath);
        }
        else
        {
            string s = to_string(node->val) + \->\;
            currPath += s;            
        }

        rec_Path(node->left,paths,currPath);
        rec_Path(node->right,paths,currPath);

        currPath.resize(prevSize);
    }
};