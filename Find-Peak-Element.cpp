class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // if(nums[0] == -2147483648 && nums.size() == 1) return 0;
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = -1;
        int max = INT_MIN;
        int ans = 0;

        while(low<=high)
        {
            mid = low + (high - low) / 2;
            if(nums[mid] > max)
            {
                max = nums[mid];
                ans = mid;
            }

            if(mid + 1 < n && mid > 0 && nums[mid+1] > nums[mid] && nums[mid-1] > nums[mid] && nums[mid+1] > nums[mid-1])
            {
                low = mid+1;

            }
            else if(mid + 1 < n && mid > 0 && nums[mid+1] > nums[mid] && nums[mid-1] > nums[mid] && nums[mid+1] < nums[mid-1])
            {
                high = mid-1;
            }
            else if(mid + 1 < n && nums[mid+1] > nums[mid])
            {
                low = mid+1;
            }
            else if(mid > 0 && nums[mid-1] > nums[mid])
            {
                high = mid-1;
            }
            else
                break;
        }

        return ans;
    }
};