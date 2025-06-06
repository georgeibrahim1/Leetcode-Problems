class Solution {
public:
    string addBinary(string a, string b) {

        int carry = 0;
        int sizeA = a.length();
        int sizeB = b.length();
        string c = \\;

        if(sizeA > sizeB)
        {
            for(int i = 0 ; i < sizeA - sizeB ; i++) 
            {
                b.insert(b.begin(),'0');

            } 
            sizeB = sizeA;
        }
        else if(sizeA < sizeB)
        {
            for(int i = 0 ; i < sizeB - sizeA ; i++) 
            {
                a.insert(a.begin(),'0');
            }
            sizeA = sizeB; 
        }

        for (int i = a.length() - 1; i >= 0; i--) {
            if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) {
                if (carry) {
                    c.push_back('0');
                } else {
                    c.push_back('1');
                }
            } else if (a[i] == '0' && b[i] == '0') {
                if (carry) {
                    c.push_back('1');
                    carry = 0;
                } else {
                    c.push_back('0');
                }
            } else if (a[i] == '1' && b[i] == '1') {
                if (carry) {
                    c.push_back('1');
                } else {
                    c.push_back('0');
                }
                carry = 1;
            }
        }

        if (carry) c.push_back('1');
        reverse(c.begin(), c.end());
        return c;
    }
};