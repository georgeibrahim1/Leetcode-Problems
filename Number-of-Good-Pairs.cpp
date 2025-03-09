class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int> numToindex;
        int Number_of_Good_Pairs = 0;

        //we will count the number of occurences of any number -> n= numofOcc-1 -> then -> (n-1)+(n-2)+..+1
        // [1,2,3,1,1,3]
        // 1 ->  3 times -> (3-1)+(3-2)+(3-3) = 2+1 = 3
        // 2 -> only one
        // 3 -> 2 times -> (2-1)+(2-2) = 1

        for(int i = 0 ; i < nums.size() ; i++) //o(n)
        {
            numToindex[nums[i]]++;
        }

        for(auto i = numToindex.begin() ; i != numToindex.end() ; i++) //o(n)
        {
            int n = i->second;
            if( n > 1)
            {
                Number_of_Good_Pairs += (n-1) * (n) / 2 ; // n + (n-1) + (n-2) + .. + 1 == n * (n + 1) / 2
                                                        // but we will put n-1 instead of n
            }
        }

        return  Number_of_Good_Pairs;
    }
};