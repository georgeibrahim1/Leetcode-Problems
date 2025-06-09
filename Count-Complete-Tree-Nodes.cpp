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
    
    // works with small trees
    // int countNodes(TreeNode* root) {
        
    //     if(!root) return 0;
    //     if(root && !root->left && !root->right) return 1;
    //     if(root && !root->left && root->right) return 2;
    //     if(root && root->left && !root->right) return 2;

    //     int ch_r = 0;
    //     int ch_l = 0;
    //     int l = 0;
    //     int r = 0;

    //     get_level_of_the_most_left(root,l,ch_l);
    //     get_level_of_the_most_right(root,r,ch_r);
        
    //     if(l==r)
    //     {
    //         return (pow(2,l) - 1);
    //     }
    //     else if(r<l)
    //     {
    //         //no children of r
    //         //if r has children it will be 1
    //         // ch_l can be 0 or 2

    //         if(ch_l && ch_r)
    //         {
    //             return ( pow(2,l) - 2);
    //         } 
    //         else if(!ch_l && ch_r)
    //         {
    //             //it will never happen
    //             return -1;
    //         }
    //         else if(ch_l && !ch_r)
    //         {
    //             return ( pow(2,l) - 3);
    //         }
    //         else
    //         {
    //             return ( pow(2,r));
    //         }
    //     }

    //     return -1 ; //dumbass
    // }

    // // 1->3->7->15->31->...
    // // Diffs = 2 , 4 , 8 , 16 , ... (1<<i)
    // void get_level_of_the_most_right(TreeNode* node , int& r_level , int& ch_r)
    // {
    //     if(!node) return ;
    //     if(!node->right)
    //     {
    //         int num = node->val;
    //         // int i = 0 ;
    //         // while(num!=0 && i < 31 )
    //         // { 
    //         //     if((1<<i) <= num)
    //         //     {
    //         //         num -= (1 << i);
    //         //     }
    //         //     else break;
    //         //     i++;
    //         // }
    //         r_level = log2(num) + 1;//log2(node->val)+1
    //         if(node->left) ch_r = 1; //only true when the right < left && it has one left child
    //         return;
    //     }

    //     get_level_of_the_most_right(node->right,r_level,ch_r);
    // }

    // void get_level_of_the_most_left(TreeNode* node , int& l_level , int& ch_l)
    // {
    //     if(!node) return ;

    //     if(node->left && !node->left->left) //the node before the most left node
    //     {
    //         if(node->right)
    //         {
    //             ch_l = 2;
    //         }
    //     }

    //     if(!node->left)
    //     {
    //         int num = node->val+1;
    //         int i = 0 ;
    //         // while(num!=0 && i < 31 )
    //         // { 
    //         //     if((1<<i) <= num)
    //         //     {
    //         //         num -= (1 << i);
    //         //     }
    //         //     else break;
    //         //     i++;
    //         // }
    //         l_level = log2(num) + 1;
    //         return;
    //     }

    //     get_level_of_the_most_left(node->left, l_level,ch_l);
    // }

    int findleft(struct TreeNode* root)
    {
        int count=0;
        while(root!=NULL)
        {
            count++;
            root=root->left;
        }
        return count;
    }
    int findright(struct TreeNode* root)
    {
        int count=0;
        while(root!=NULL)
        {
            count++;
            root=root->right;
        }
        return count;
    }

    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int rh=findright(root);
        int lh=findleft(root);
        if(rh==lh)
        {
            return (1<<lh)-1;
        }
        else
        {
            return 1+countNodes(root->left)+countNodes(root->right);
        }
    }

};