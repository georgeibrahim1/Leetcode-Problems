class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        // int min = nums[0];
        // int i_min = 0;
        // int increasing_max = INT_MIN;

        // for(int i = 1 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] < min)
        //     {
        //         min = nums[i];
        //         i_min = i;
        //     }
        // }

        // for(int i = i_min+1 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] > min && nums[i] > increasing_max)
        //     {
        //         increasing_max = nums[i];
        //     }
        // }

        // if(increasing_max == INT_MIN) return -1;
        // return increasing_max - min;

        int minn = nums[0];
        int max_diff = INT_MIN;

        for(int i = 1 ; i < nums.size() ; i++)
        {
            minn = min(minn,nums[i]);
            max_diff = max(max_diff,nums[i]-minn);
        }
        if(max_diff == 0) return -1;
        return max_diff;
    }
};