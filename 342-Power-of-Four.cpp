class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false;
        if(n == 1) return true;
        if(n < 0)  return false;
        if(n % 4 == 0)
        {
            if(DivideByFour(n) == 1)  //Last Qutiont
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

private:
    int DivideByFour(int n)
    {
         n = n / 4;

        if(n % 4 == 0)
        {
           return DivideByFour(n);
        }
            return n;
    }
};