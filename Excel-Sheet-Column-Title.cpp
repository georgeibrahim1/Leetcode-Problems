class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        //from the titletonumber problelm -> max length is 7
        // the formula ZZ..Z is 26^(size)+...+26^(1)
        string ok;
        string title;
        double n = columnNumber;
        int length = 0;
        if(n <= 26 && n >= 1) //A -> Z
        {
            length = 1;
        }
        else if(n <= 702 && n >= 27) //AA -> ZZ 
        {
            length = 2;
        }
        else if(n <= 18278 && n >= 703)
        {
            length = 3;
        }
        else if(n <= 475254 && n >= 18279)
        {
            length = 4;
        }
        else if(n <= 12356630 && n >= 475255)
        {
            length = 5;
        }
        else if(n <= 321272406 && n >= 12356631)
        {
            length = 6;
        }
        else if(n <= 2147483647 && n >= 321272407 ) //AAAAAAA -> FXSHRXW
        {
            length = 7;
        }

        double fraction = 0;
        for(int i = 0 ; i < length ; i++)
        {
            n /= 26;
            fraction = n - int(n);
            if (fabs(fraction - (1.0 / 26.0)) < 1e-8)
            {
                title.append(\A\);
            }
            else if (fabs(fraction - (2.0 / 26.0)) < 1e-8)
            {
                title.append(\B\);
            }
            else if (fabs(fraction - (3.0 / 26.0)) < 1e-8)
            {
                title.append(\C\);
            }
            else if (fabs(fraction - (4.0 / 26.0)) < 1e-8)
            {
                title.append(\D\);
            }
            else if (fabs(fraction - (5.0 / 26.0)) < 1e-8)
            {
                title.append(\E\);
            }
            else if (fabs(fraction - (6.0 / 26.0)) < 1e-8)
            {
                title.append(\F\);
            }
            else if (fabs(fraction - (7.0 / 26.0)) < 1e-8)
            {
                title.append(\G\);
            }
            else if (fabs(fraction - (8.0 / 26.0)) < 1e-8)
            {
                title.append(\H\);
            }
            else if (fabs(fraction - (9.0 / 26.0)) < 1e-8)
            {
                title.append(\I\);
            }
            else if (fabs(fraction - (10.0 / 26.0)) < 1e-8)
            {
                title.append(\J\);
            }
            else if (fabs(fraction - (11.0 / 26.0)) < 1e-8)
            {
                title.append(\K\);
            }
            else if (fabs(fraction - (12.0 / 26.0)) < 1e-8)
            {
                title.append(\L\);
            }
            else if (fabs(fraction - (13.0 / 26.0)) < 1e-8)
            {
                title.append(\M\);
            }
            else if (fabs(fraction - (14.0 / 26.0)) < 1e-8)
            {
                title.append(\N\);
            }
            else if (fabs(fraction - (15.0 / 26.0)) < 1e-8)
            {
                title.append(\O\);
            }
            else if (fabs(fraction - (16.0 / 26.0)) < 1e-8)
            {
                title.append(\P\);
            }
            else if (fabs(fraction - (17.0 / 26.0)) < 1e-8)
            {
                title.append(\Q\);
            }
            else if (fabs(fraction - (18.0 / 26.0)) < 1e-8)
            {
                title.append(\R\);
            }
            else if (fabs(fraction - (19.0 / 26.0)) < 1e-8)
            {
                title.append(\S\);
            }
            else if (fabs(fraction - (20.0 / 26.0)) < 1e-8)
            {
                title.append(\T\);
            }
            else if (fabs(fraction - (21.0 / 26.0)) < 1e-8)
            {
                title.append(\U\);
            }
            else if (fabs(fraction - (22.0 / 26.0)) < 1e-8)
            {
                title.append(\V\);
            }
            else if (fabs(fraction - (23.0 / 26.0)) < 1e-8)
            {
                title.append(\W\);
            }
            else if (fabs(fraction - (24.0 / 26.0)) < 1e-8)
            {
                title.append(\X\);
            }
            else if (fabs(fraction - (25.0 / 26.0)) < 1e-8)
            {
                title.append(\Y\);
            }
            else if (fraction == 0 )
            {
                title.append(\Z\);
                n--;
            }
                n = int(n);
        }

        //Reverse String title
        for (auto i = title.rbegin(); i != title.rend(); ++i) {
            ok.push_back(*i);
        }

        return ok;

    }
};