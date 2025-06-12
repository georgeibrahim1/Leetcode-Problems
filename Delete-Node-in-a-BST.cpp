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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(!root) return nullptr;
        rec_delete(root,key);
        return root;

    }

    void rec_delete(TreeNode*& node, int key)
    {
        if(!node) return;

        if(key < node->val)
        {
            rec_delete(node->left,key);
            return;
        }
        else if(key > node->val)
        {
            rec_delete(node->right,key);
            return;
        }
        else
        {
            if(!node->left && !node->right)
            {
                node = nullptr;
                return;
            }
            else if(node->left && !node->left->left &&  !node->left->right )
            {
                swap(node->val , node->left->val);
                node->left = nullptr;
                return;
            }
            else if(node->right && !node->right->left &&  !node->right->right )
            {
                swap(node->val , node->right->val);
                node->right = nullptr;
                return;
            }
            else
            {
                TreeNode* max_of_left_subtree = get_the_max_of_a_subtree(node->left);
                if(!max_of_left_subtree) 
                {
                    node = node->right; //gamed neeeek
                    return;
                }
                swap(node->val,max_of_left_subtree->val);
                rec_delete(node->left,max_of_left_subtree->val);

                return;
            }
        }
    }


    TreeNode* get_the_max_of_a_subtree(TreeNode* node)
    {
        if(!node) return nullptr; //only when there is no left subtree
        if(!node->left && !node->right)
        {
            return node;
        }
        else if(!node->right)
        {
            return node;
        }

        return get_the_max_of_a_subtree(node->right);
    }
};