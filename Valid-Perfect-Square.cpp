class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 1) return true;

        int l = 2;
        int r = (num/2);

        while(l<=r)
        {
            int mid = l + (r-l) / 2;

            if((long long)mid*mid == (long long)num)
            {
                return true;
            }

            if((long long)mid*mid < (long long)num)
            {
                l = mid+1;
            }

            if((long long)mid*mid > (long long)num)
            {
                r = mid-1;
            }
        }        

        return false; //dumb

    }
};