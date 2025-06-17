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
// class Solution {
// public:
//     map<int,int> m;
//     int max_freq = 0;
//     vector<int> findMode(TreeNode* root) {
//         vector<int> aaaaaaaaaaaa7;
//         rec_ok(root);
//         for(auto it : m) {
//             if(it.second == max_freq) aaaaaaaaaaaa7.push_back(it.first);
//         }
//         return aaaaaaaaaaaa7;
//     }

//     void rec_ok(TreeNode* node)
//     {
//         if(!node) return;
//         if(m.find(node->val) == m.end()) {
//             m[node->val] = 1;
//         }
//         else {
//             m[node->val]++;
//         }
//         if(m[node->val] > max_freq) max_freq = m[node->val];
//         rec_ok(node->left);
//         rec_ok(node->right);

//     }
// };
class Solution {
public:
    unordered_map<int,int> m;
    int max_freq = 0;
    vector<int> aaaaaaaaaaaa7;
    vector<int> findMode(TreeNode* root) {
        rec_ok(root);
        return aaaaaaaaaaaa7;
    }

    void rec_ok(TreeNode* node)
    {
        if(!node) return;
        rec_ok(node->left);
        int count = ++m[node->val]; //this eplaces all my fucking lines
        // if(m.find(node->val) == m.end()) {
        //     m[node->val] = 1;
        // }
        // else {
        //     m[node->val]++;
        // }

        //this comes form the inorder proberity with BSTs
        if(count > max_freq) {
            max_freq = count;
            aaaaaaaaaaaa7.clear();
            aaaaaaaaaaaa7.push_back(node->val);
        }
        else if(count == max_freq) {
            aaaaaaaaaaaa7.push_back(node->val);
        }   
        rec_ok(node->right);
    }
};