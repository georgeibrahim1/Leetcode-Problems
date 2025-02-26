class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0, minSum = 0;  
        int currMax = 0, currMin = 0;

        for (int i = 0 ; i < nums.size() ; i++) {
            currMax = max(0, currMax + nums[i]);
            currMin = min(0, currMin + nums[i]);
            maxSum = max(maxSum, currMax);
            minSum = min(minSum, currMin);
        }

        return max(maxSum, abs(minSum));
    }
};