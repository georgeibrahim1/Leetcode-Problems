class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        if(n == 1) return true;
        if(n < 0)  return false;
        if(n % 2 == 0)
        {
            if(DivideByTwo(n) == 1)  //Last Qutiont
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
    int DivideByTwo(int n)
    {
         n = n / 2;

        if(n % 2 == 0)
        {
           return DivideByTwo(n);
        }
            return n;
    }
};