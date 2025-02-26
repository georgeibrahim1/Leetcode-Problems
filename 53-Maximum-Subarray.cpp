class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Currsum = nums[0];
        int total = Currsum;

        for(int i = 1 ; i < nums.size() ; i++)
        {
            Currsum = max(Currsum,0); 
            Currsum += nums[i];
            total = max(Currsum , total);
        }

        return total;
    }
};