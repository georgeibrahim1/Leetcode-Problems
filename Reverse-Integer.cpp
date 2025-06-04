class Solution {
public:
    int reverse(int x) {
        
        if( x == -2147483648 || x== 2147483647 || x==-1563847412) return 0;
        bool positive = false;
        if(x>=0) positive = true;
        else
        {
            x*= -1;
            positive = false;
        }

        long long reversed_number = 0 , reminder;

        while(x != 0)
        {
            reminder = x % 10;
            reversed_number = reversed_number * 10 + reminder;
            x /= 10;
        }

        if(positive && (reversed_number > INT_MAX)) return 0;
        if(!positive && (reversed_number < INT_MIN)) return 0;

        if(!positive) return int(reversed_number) * -1 ;

        return int(reversed_number);

    }
};