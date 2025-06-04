class Solution {
public:
    int myAtoi(string s) {
        long long res = 0;
        bool start = false;
        bool positive = true;
        bool oneSignPass = false;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (c == ' ') {
                if (start || oneSignPass) break;
                continue;
            }
            else if (c == '+' || c == '-') {
                if (start || oneSignPass) break;
                positive = (c == '+');
                oneSignPass = true;
                continue;
            }
            else if (c >= '0' && c <= '9') {
                start = true;
                res = res * 10 + (c - '0');

                if (positive && res > INT_MAX) return INT_MAX;
                if (!positive && -res < INT_MIN) return INT_MIN;
            }
            else {
                break;
            }
        }

        if (!positive) res = -res;
        return (int)res;
    }
};
