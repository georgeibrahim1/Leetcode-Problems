class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int x = nums[0] * nums[1] * nums[2];
        int y = nums[n-1] * nums[n-2] * nums[n-3];
        int huh = nums[0] * nums[1] * nums[n-1];
        if(x>y && x>huh)
        {
            return x;
        }
        else if(huh>y && huh>x)
        {
            return huh;
        }
        else 
        {
            return y;
        }
    }
};