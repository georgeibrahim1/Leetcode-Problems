/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        ans.push_back({root->val});
        int last_level = 0;
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> v;
            for(int i = 0 ; i < sz ;i++)
            {
                Node* node = q.front();
                q.pop();
                for(int i = 0 ; i < node->children.size() ;i++)
                {
                    q.push(node->children[i]);
                    v.push_back(node->children[i]->val);
                }
            }
            last_level++;
            if(!v.empty())
            {
                ans.push_back(v);
            }
        }

        return ans;
    }
};