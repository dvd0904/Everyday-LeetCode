#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Solution 
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        string res = "";
        res += word1[0];
        int i = 1, j = 0;
        while(i < word1.size() && j < word2.size())
        {
            if(i > j)
                res += word2[j++];
            if(i ==  j)
                res += word1[i++];
        }

        if(i < word1.size())
            res += word1.substr(i, word1.size() - i);

        if(j < word2.size())
            res += word2.substr(j, word2.size() - j);

        return res;
        
    }

    string mergeAlternately2(string word1, string word2)
    {
        int l1 = word1.size(), l2 = word2.size(),  min_idx = std::min(l1, l2), i;

        string res = "";
        for(i = 0; i < min_idx; i++)
        {
            res = res + word1[i] + word2[i];
        }

        res += (l1 == min_idx ? word2.substr(i, l2 - i) : word1.substr(i, l1 - i));

        return res;

    }


};

int main()
{   
    string s1, s2;
    cin >> s1 >> s2;

    Solution sol;
    cout << sol.mergeAlternately2(s1, s2) << endl;


}