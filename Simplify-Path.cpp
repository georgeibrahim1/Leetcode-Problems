class Solution {
public:
    string simplifyPath(string path) {

        int n = path.size();
        stack<string> s;

        for(int i = 0 ; i < n ; i++)
        {
            if( path[i] == '/')
            {
                continue;
            }

            string temp;
            while(i < path.size() && path[i] != '/')
            {
                temp.push_back(path[i]);
                i++;
            }

            if(temp == \..\)
            {
                if(!s.empty()) s.pop();
            }
            else if(temp == \.\)
            {
                continue;
            }
            else
            {
                s.push(temp);
            }
        }

        stack<string> tempst;
        while(!s.empty())
        {
            tempst.push(s.top());
            s.pop();
        }

        string ans = \\;
        while(!tempst.empty())
        {
            ans += \/\;
            ans += tempst.top();
            tempst.pop();
        }
        if(ans.size() == 0) return \/\;
        return ans;
    }
};