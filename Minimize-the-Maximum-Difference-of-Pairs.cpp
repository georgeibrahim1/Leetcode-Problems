class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0; //min possible diff
        int high = nums[n-1] - nums[0];
        int mid = -1;
        int ans = -1;  

        while(low<high)
        {
            mid = low + (high - low) / 2;
            if(ok(nums,mid,p))
            {
                ans = mid;
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }    

        return low;
    }

    bool ok(vector<int>& nums , int mid,int p)
    {
        int pairs = 0 ;

        for(int i = 1 ; i < nums.size() ;i++)
        {
            if(mid >= abs(nums[i] - nums[i-1]))
            {
                pairs++; i++;
            }
        }   

        return pairs>=p;
    }
};