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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums,0,nums.size()-1);
        // vector<int> bst;
        // int size = nums.size();

        // if(size == 0)
        // {
        //     return nullptr;
        // }

        // // if(size == 1 )
        // // {
        // //     TreeNode * hi = new TreeNode(nums[0]);
        // //     return hi;
        // // }

        // int i = size / 2;
        // bst.push_back(nums[i]);

        // int l = i - 1;
        // int r = i + 1;

        // if(l>=0)
        // {
        //     for(int j = l ; j >= 0 ; j--)
        //     {
        //         bst.push_back(nums[j]);
        //     }   
        // }

        // if(r<=size-1)
        // {
        //     for(int j = r ; j < size ; j++)
        //     {
        //         bst.push_back(nums[j]);
        //     }   
        // }

        // reverse(bst.begin() , bst.end());

        // TreeNode* BST = new TreeNode(bst.back());

        // TreeNode* BST_Root = BST;

        // bst.pop_back();

        // int l_size = bst.size();

        // //left
        // for(int j = l_size - 1; j >= l_size / 2 ; j--)
        // {
        //     TreeNode* newNode = new TreeNode(bst[j]);
        //     bst.pop_back();
        //     BST->left = newNode;
        //     BST = BST->left;
        // }


        // BST = BST_Root; 

        // //right
        // int r_size = bst.size();
        // for(int j = r_size - 1 ; j >= 0  ; j--)
        // {
        //     TreeNode* newNode = new TreeNode(bst[j]);
        //     bst.pop_back();
        //     BST->right = newNode;
        //     BST = BST->right;
        // }

        // return BST_Root;
    }

    TreeNode* buildBST(vector<int>& nums, int left, int right) {
    if (left > right) return nullptr;

    int mid = left + (right - left) / 2;
    TreeNode* node = new TreeNode(nums[mid]);

    node->left = buildBST(nums, left, mid - 1);
    node->right = buildBST(nums, mid + 1, right);

    return node;
    }
};