class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        bool left_to_right = 1;
        bool kosom_elbdan = 1;
        for(int i = 0 ; i < grid.size() ; i++)
        {
            if(left_to_right)
            {
                for(int j = 0 ; j < grid[i].size() ; j++)
                {
                    if(kosom_elbdan)
                    {
                        ans.push_back(grid[i][j]);
                        kosom_elbdan = 0;
                    }
                    else
                        kosom_elbdan = 1;

                }

                left_to_right = 0;
            }
            else
            {
                for(int j = grid[i].size()-1 ; j >= 0 ; j--)
                {
                    if(kosom_elbdan)
                    {
                        ans.push_back(grid[i][j]);
                        kosom_elbdan = 0;
                    }
                    else
                        kosom_elbdan = 1;
                }

                left_to_right = 1;
            }
        }

        return ans;
    }
};