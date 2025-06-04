class Solution {
public:
    string triangleType(vector<int>& nums) {

        if(nums[0] == nums[1] && nums[0] == nums[2] && nums[1] == nums[2])
        {
            return "equilateral";
        }

        if(nums[0] >= nums[1] && nums[0] >= nums[2])
        {
            int temp = nums[2];
            nums[2] = nums[0];
            nums[0] = temp;
        }
        else if(nums[1] >= nums[0] && nums[1] >= nums[2])
        {
            int temp = nums[2];
            nums[2] = nums[1];
            nums[1] = temp;
        }
        
        if(nums[2] < nums[0] + nums[1])
        {
            if(nums[0] != nums[1] && nums[0] != nums[2] && nums[1] != nums[2])
            {
                return "scalene";
            }
            else if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
            {
                return "isosceles";
            }
            else
                return "none";
        }
        else
        {
            return "none";
        }

        return "dumbass";
    }
};