#include<string>
#include<cstring>

class Solution {
public:
    bool isAnagram(string s, string t) {
        char* A1 = new char[s.size()+1];
        char* A2 = new char[t.size()+1];

        strcpy(A1 , s.c_str());
        strcpy(A2 , t.c_str());

        sort(A1 , A1 + s.size() );
        sort(A2 , A2 + t.size() );
/*
        for(int i = 0 ; i < s.size() - 1 ; i++ )
        {
            for(int j = 0 ; j < s.size() - 1 - i ; j++ )
            {
                if(A1[j] > A1[j+1])
                {
                    char temp = A1[j];
                    A1[j] = A1[j+1];
                    A1[j+1] = temp;
                }
            }
        }

        for(int i = 0 ; i < t.size() - 1 ; i++ )
        {
            for(int j = 0 ; j < t.size() - 1 - i ; j++ )
            {
                if(A2[j] > A2[j+1])
                {
                    char temp = A2[j];
                    A2[j] = A2[j+1];
                    A2[j+1] = temp;
                }
            }
        }
*/
        if(strcmp(A1 , A2) == 0)
        {
           return true;
        }
        else
        {
            return false;
        }

    }
};