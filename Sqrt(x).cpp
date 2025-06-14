class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1 || x==2 || x==3) return 1;

        long long low = 2;
        long long high = x;
        long long mid = -1;
        int ans = -1;

        while(low<=high)
        {
            mid = low + (high-low) / 2;

            if(mid*mid == x)
            {
                return mid;
            }
            else if(mid*mid > x)
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }   

        return ans;
    }
};