class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //o(n)
        // unordered_map<int,bool> ok;
        // for(int i = 0 ; i <= nums.size() ; i++)
        // {
        //     ok[i] = false;
        // }

        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     ok[nums[i]] = true;
        // }

        // for(int i = 0 ; i <= nums.size() ; i++)
        // {
        //     if(ok[i] == false)
        //     {
        //         return i;
        //     }
        // }
        
        //o(n) , but leetcode likes it , i don't know fucking why
        int n = nums.size();
        int Tsum = n * (n+1)/2;
        int sum = accumulate (nums.begin(),nums.end(),0);
        return Tsum - sum;
    }
};