class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        if(mat.size() != target.size()) return false;

        rotate_by_90_degree(mat);

        if(check_if_equal(mat,target)) return true;

        rotate_by_90_degree(mat);

        if(check_if_equal(mat,target)) return true;

        rotate_by_90_degree(mat);

        if(check_if_equal(mat,target)) return true;

        rotate_by_90_degree(mat);

        if(check_if_equal(mat,target)) return true;

        return false;

    }

    void rotate_by_90_degree(vector<vector<int>>& mat)
    {
        int n = mat.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                swap(mat[i][j],mat[j][i]);
            }  
        }

        for(int i = 0 ; i < n ; i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
    }

    bool check_if_equal(vector<vector<int>> mat1 , vector<vector<int>> mat2)
    {
        int n = mat1.size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(mat1[i][j] != mat2[i][j])
                {
                    return false;
                }
            }
        }

        return true;
    }
};