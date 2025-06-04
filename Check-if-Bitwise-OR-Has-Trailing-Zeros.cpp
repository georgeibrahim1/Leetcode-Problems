class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        bool onePass = false;
        for(int i : nums)
        {
            if(i % 2 == 0)
            {
                if(!onePass) 
                {
                    onePass = true;
                    continue;
                }
                else
                {
                    return true;
                }
            }
        }   

        return false;
    }
};