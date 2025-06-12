class Solution {
public:
    int climbStairs(int n) {
        
        // if(n==0) return 1;
        // if(n<0) return 0;
        // return climbStairs(n-1) + climbStairs(n-2);

        if(n==1) return 1;
        if(n==2) return 2;

        int prev = 1;
        int curr = 2;
        for(int i = 3 ; i <= n ; i++)
        {   
            int temp = curr;
            curr = curr + prev;
            prev = temp;
        }

        return curr;
    }
};