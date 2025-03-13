class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        //The dumpest thing i have ever seen in leetcode

        int n = 0 ;
        for(int i = 0 ; i < logs.size() ; i++)
        {
            if(logs.at(i) == "../")
            {
                if(n!=0)
                {n--;}
                
            }
            else if(logs.at(i) == "./")
            {
                //no shit
            }
            else
            {
                n++;
            }
        }

        return n;

    }
};