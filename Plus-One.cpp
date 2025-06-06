class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        //this solution is not valid for huge fucking numbers due to overflow

        //fuck leetcode i hate you

        // long double n = 0;
        // vector<int> ok;
        // int size = digits.size();
        // for(int i = 0 ; i < size ; i++)
        // {
        //     n += pow(10,size-i-1) * digits[i];
        // }

        // n++;

        // if(n == pow(10,size))
        // {
        //     size++;
        // }

        // int digit ;
        // int i = size - 1;
        // while(i != -1)
        // {
        //     long double tens = pow(10,i);
        //     digit = n / tens;
        //     n = -1 * ( (digit * tens) - n);
        //     i--;
        //     ok.push_back(digit);
        // }

        // return ok;

        for(int i = digits.size() - 1 ; i >= 0 ; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0; // if > 9
        }

        digits.insert(digits.begin() , 1);

        return digits;
    }
};