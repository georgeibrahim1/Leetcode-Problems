class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int num = 0 ;
        int size = columnTitle.length();
        num += int(columnTitle.at(size-1)) - 64;
        if(size > 1)
        {
            for(int i = 0 ; i < size - 1 ; i++)
            {
                num+= pow(26,size-1-i) * (int(columnTitle.at(i)) - 64);
            }
        }

        return num;

    }
};