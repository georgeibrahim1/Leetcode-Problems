class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        int k_max = -1,max;
        int k_min = -1,min,k_min_i;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] - '0' != 9)
            {
                k_max = s[i] - '0';
                break;
            }
        }
        if(k_max!=-1) max = remap(num,k_max,9);
        else max = num;

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] - '0' != 1  && s[i] - '0' != 0)
            {
                k_min = s[i] - '0';
                k_min_i = i;
                break;
            }
        }
        if(k_min!=-1 && k_min_i == 0) min = remap(num,k_min,1);
        else if(k_min!=-1 && k_min_i != 0) min = remap(num,k_min,0);
        else min = num;

        return max - min;  
    }

    int remap(int num, int k, int r)
    {
        int result = 0;
        int place = 1;

        while (num != 0)
        {
            int digit = num % 10;
            if (digit == k) digit = r;
            result += digit * place;
            place *= 10;
            num /= 10;
        }

        return result;
    }   
};