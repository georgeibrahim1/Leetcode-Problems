class Solution {
public:
    bool isValid(string s) {

       stack<char> st;

       for(int i = 0 ; i < s.length() ; i++)
       {    
            if(!st.empty())
            {
                if(s.at(i) == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if(s.at(i) == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else if(s.at(i) == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    st.push(s.at(i));
                }
            }
            else
            {
                st.push(s.at(i));
            }
       }

       return (st.empty());

    }
};