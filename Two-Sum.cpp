class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> indices;

        //REMEBER TO EDIT , IT IS NOT OPTIMAL 
        //handling if there is [..,target/2,..] 

        if(target % 2 == 0)
        {
            auto it = find(nums.begin() , nums.end() , target / 2);
            if( it != nums.end() && count(nums.begin() , nums.end() , target / 2) == 1)
            {
                if(*it >= 0 ) *it = INT_MAX;
                if(*it < 0) *it = INT_MIN; 
            }
        }

        unordered_map<int,pair<int,int>> m1;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            pair<int , int> p = {nums[i],i};
            m1[target - nums[i]] = p;
        }

        auto it = m1.end();
        int j;

        for(j = 0 ; j < nums.size() ; j++)
        {
            if(m1.find(nums[j]) != m1.end())
            {
                it = m1.find(nums[j]);
                break;
            } 
        }

        indices.push_back(j);
        indices.push_back(it->second.second);

        return indices;
    }
};