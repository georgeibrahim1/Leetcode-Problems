class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs[0].size();
        int len = strs.size();
        vector<string> columns;
        for(int i = 0 ; i < n ;i++) {
            string temp = "";
            for(int j = 0 ; j < len ;j++) {
                temp += strs[j][i];
            }
            columns.push_back(temp);
        }
        int count = n;
        for(int i = 0 ; i < n ; i++)
            if(asc_sort(columns[i]) || desc_sort(columns[i])) count--;
        return count;
    }

    bool asc_sort(string word)
    {
        int n = word.size();
        for(int i = 0 ; i < n ;i++)
        {
            if(i+1<n && word[i+1] < word[i]) return false;
        }

        return true;
    }

    bool desc_sort(string word)
    {
        int n = word.size();
        for(int i = 0 ; i < n ;i++)
        {
            if(i>0 && word[i-1] > word[i]) return false;
        }

        return true;
    }
};