class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = accumulate(accounts[0].begin() ,accounts[0].end() , 0  );

        for(int i = 1 ; i < accounts.size() ; i++)
        {
            for(int j = 0 ; j < accounts[i].size() ; j++)
            {
                int temp = accumulate(accounts[i].begin() ,accounts[i].end() , 0  );
                if(temp > max)
                {
                   max = temp;
                }
            }
        }
        return max;
    }
};