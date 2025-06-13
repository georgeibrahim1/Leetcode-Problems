class Solution {
public:
    int minCapability(vector<int>& nums, int k) {

        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        int mid = -1;
        
        while(low<=high)
        {
            mid = low + (high - low) / 2;
            if(ok(nums,k,mid))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        return ans;
    }

    bool ok(vector<int>& nums , int k,int mid)
    {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] <= mid) { i++; count++;}
        }

        return count>=k;
    }
};