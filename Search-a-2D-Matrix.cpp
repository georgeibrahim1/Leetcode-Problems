class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int M = matrix.size();
        int l = 0;
        int r = M - 1;
        int mid = -1;
        int m = -1;
        
        while(l<=r)
        {
            mid = l + (r-l) / 2;

            if(matrix[mid][0] == target)
            {
                return true;
            }
            else if(matrix[mid][0] > target)
            {
                if(mid > 0 && matrix[mid][0] > target && matrix[mid - 1][0] <= target)
                {
                    m = mid - 1;
                    break;
                }
                r = mid - 1;
            }
            else
            {
                if(mid == M - 1 || matrix[mid + 1][0] > target)
                {
                    m = mid;
                    break;
                }
                l = mid + 1;
            }
        }

        if (m == -1) {
            return false;
        }

        l = 0;
        r = matrix[m].size() - 1;

        while(l<=r)
        {
            mid = l + (r-l) / 2;

            if(matrix[m][mid] == target)
            {
                return true;
            }
            else if(matrix[m][mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return false;

    }
};