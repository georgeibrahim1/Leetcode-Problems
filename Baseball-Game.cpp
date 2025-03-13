#include <stack>
#include <cctype>
class Solution {
public:  
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int i = 0;
        while(i < operations.size())
        {
            if(operations[i] == \+\)
            {
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(y);
                s.push(x);
                s.push(x+y);
            }
            else if(operations[i] == \D\)
            {
                int x = s.top();
                s.push(2*x);
            }
            else if(operations[i] == \C\)
            {
                s.pop();
            }
            else
            {
                s.push(stoi(operations[i]));
            }
            i++;
        }

        int sum = 0 ;
        while(!s.empty())
        {
            int x = s.top();
            s.pop();
            sum += x;
        }

        return sum;
    }
};