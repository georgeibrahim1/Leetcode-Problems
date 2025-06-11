class Solution {
public:
    string toHex(int num) {
        // turn to binary , make it n*4 bits as n is an integer , turn it to hexa for every four bits
        // for negatives , use ones complement in binary and do the above shit , or use unsigned int
        // n max = 8
        // this is not the optimal but ok

        if(num ==0) return \0\;
        unsigned int n = num;

        string result;
        string hex  = \0123456789abcdef\;

        while(n!=0)
        {
            result+=hex[n%16];
            n >>= 4; //right shift four bits
        }

        reverse(result.begin() , result.end());

        return result;


    }
};