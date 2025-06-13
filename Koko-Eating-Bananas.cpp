class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = 0;
        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        long long mid = -1;
        long long ans = -1;

        while(low<=high)
        {
            mid = low + (high - low) / 2;
            if(sum_with_ceil(piles,mid) <= h)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {   
                low = mid+1;
            }
        }

        return ans;
    }

    long long sum_with_ceil(vector<int>& nums,long long k)
    {
        long long sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += ceil((long double)nums[i]/k);
        }
        return sum;
    }
};