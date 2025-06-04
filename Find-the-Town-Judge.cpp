class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        if(n==1) return 1;
        vector<bool>Did_They_Trust(n,false);
        vector<int>Trusters(n);

        for(int i = 0 ; i < trust.size() ; i++)
        {
            Did_They_Trust[trust[i][0] - 1] = true;   
            Trusters[trust[i][1] - 1] += 1;
        }

        int judge = -1;
        int how_many = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(Did_They_Trust[i] == false && Trusters[i] == n - 1)
            {
                judge = i+1;
                how_many++;
            }
        } 

        if(how_many > 1) return -1;

        return judge;

    }
};