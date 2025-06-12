class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max = INT_MIN;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++)
        {
            if(i == n - 1)
            {
                if(abs(nums[i] - nums[0]) > max)
                {
                    max = abs(nums[i] - nums[0]);
                }
            }
            else
            {
                if(abs(nums[i] - nums[i+1]) > max)
                {
                    max = abs(nums[i] - nums[i+1]);
                }
            }
        }

        return max;
    }
};