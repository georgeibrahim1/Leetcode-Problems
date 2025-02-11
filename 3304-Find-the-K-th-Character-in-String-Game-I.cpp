#include <string>
using namespace std;

class Solution {
public:
    string word = "a";
    char kthCharacter(int k) {
        if(word.size() >= k)
        {
            return word.at(k-1);    //Base 
        }

        string newChars;                                //General 
        for(int i = 0 ; i < word.size() ; i++)
        {
            newChars.push_back(word[i] + 1);
        }
        word = word + newChars;

        return kthCharacter(k);     

    }
};