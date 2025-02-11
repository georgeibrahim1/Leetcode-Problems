/* class Solution {
public:
    bool isPowerOfThree(int n) {
        if(shit(n) > 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
private :
    int shit(int n)
{
int it = 0;          //Num of dividing operations

        if(n == 1 || ( (2 * n) != (int)(2 * n) ) ) //(2 * n) != (int)(2 * n) to check if it is a
                                                   //float or not
        {
        return it;
        }

        it += 1;

        return shit(n / 3) ;
}
};

*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        if(n == 1) return true;
        if(n < 0)  return false;
        if(n % 3 == 0)
        {
            if(DivideByThree(n) == 1)  //Last Qutiont
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
    int DivideByThree(int n)
    {
         n = n / 3;

        if(n % 3 == 0)
        {
           return DivideByThree(n);
        }
            return n;
    }
};

