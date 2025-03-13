class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> ss;
        stack<char> ts;
        int ssn = 0 ;
        int tsn = 0 ;
        
        for (char c : s) {
            if (c == '#') {
                if (!ss.empty()) {ss.pop(); ssn--;}
            } else {
                ss.push(c);
                ssn++;
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!ts.empty()) {ts.pop();tsn--;}
            } else {
                ts.push(c);
                tsn++;
            }
        }

        if(ssn != tsn)
        {
            return false;
        }
        else
        {
            while(!ss.empty() && !ts.empty())
            {
                if (ss.top() != ts.top())
                {
                    return false;
                }

                ss.pop();
                ts.pop();
            }
        }

        return true;
        
    }
};