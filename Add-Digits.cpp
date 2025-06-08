class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num >= 1 && num <= 9) return num;
        if(num % 9 == 0) return 9;
        int n = num % 9 ;
        while(n >= 9)
        {
            n = n % 9;
        }

        return n;
    }
};