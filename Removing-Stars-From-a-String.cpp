class Solution {
public:
    string removeStars(string s) {

        stack<char> ss;

        for (char c : s) {
            if (c == '*') {
                if (!ss.empty()) {ss.pop();}
            } else {
                ss.push(c);
            }
        }

        stack<char> temp;
        while(!ss.empty())
        {
            char x = ss.top();
            temp.push(x);
            ss.pop();
        }

        string d;
        while(!temp.empty())
        {
            char x = temp.top();
            d.push_back(x);
            temp.pop();

        }

        return d;
    }
};