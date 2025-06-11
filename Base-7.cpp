class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return \0\;
        bool neg = false;
        int n = num;
        if(num < 0)
        {
            neg = true;
            n *= -1;
        } 
        string result;
        string hex  = \0123456\;

        while(n!=0)
        {
            result+=hex[n%7];
            n /= 7; 
        }

        reverse(result.begin() , result.end());

        if(neg)
        {
            result.insert(result.begin(),'-');
        }

        return result;
    }
};