class Solution {
public:
    int countOdds(int low, int high) {
        // int numofOdd = 0;
        // for(int i = low ; i <= high ; i++)
        // {
        //     if(i % 2 == 1)
        //     {
        //         numofOdd++;
        //     }
        // }
        // return numofOdd;
        int y = high - low + 1 ; 
        if(y % 2 == 0) return (y/2);
        else
        {
            if(high % 2 == 0) return (y/2); //or low
            else return (y/2) + 1;
        } 
    }
};