/*
2 -> 2*2 -> 2*2*2

*/
class Solution {
public:
    double theBaseX;
    double theInvBaseX;
    double myPow(double x, int n) {
        theBaseX = x; //the first value of x before modifing it
        theInvBaseX = 1 / x;
        if(x == 1)
        {
            return 1;
        }
        else if(x == -1)
        {
            if(n%2 == 0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        if(n == 0)
        {
            return 1;
        }
        else if(n == -2147483648) 
        {
            return 0 ;
        }
        else if(n>0)
        {
            return myPositivePow(x,n);
        }
        else if(n<0)
        {
            return myNegativePow(1/x , n);
        }
       

        return 0; //Dummy 
    }

    double myPositivePow(double x, int n)
    {
        if(n == 1)
        {
            return x;
        }

        x = x * theBaseX;
        return myPositivePow(x,n-1);        
    }

    double myNegativePow(double x, int n) //the paramater here must be the inverse of X
    {
        if(n == -1)
        {
            return x;
        }

        x =  x * theInvBaseX;   
        return myNegativePow(x,n+1); 
    }
};