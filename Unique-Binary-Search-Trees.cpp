class Solution {
public:
    int numTrees(int n) {
        //catalan number (thx chatGPT)

        // c = (1/(n+1)) * (2nCn)

        return m_c_n(2 * n, n) / (n + 1);
    }

    long long m_c_n(int m , int n)
    {
        if (n > m) return 0;
        if (n > m - n) n = m - n;  // Take advantage of symmetry

        // (m * m-1 * ... * m-n+1) / (1*2*3*4*...*n)
        long long res = 1;
        for (int i = 1; i <= n; ++i) {
            res *= (m - i + 1);
            res /= i;
        }
        return res;
    }
};