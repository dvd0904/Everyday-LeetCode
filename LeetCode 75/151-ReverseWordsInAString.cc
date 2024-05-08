#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using std::string;
using std::stringstream;
using std::cin;
using std::cout;
using std::endl;


class Solution 
{
public:
    string reverseWords(string s) 
    {
        stringstream ss(s);
        string word;
        std::vector<string> str;
        while(ss >> word)
            str.push_back(word);

        string res = "";
        int len = str.size();
        while(len--)
            res += (str[len] + " ");
        res.erase(res.size() - 1);
        return res;
    }
};

int main()
{
    string s; 
    std::getline(cin, s);
    Solution sol;
    sol.reverseWords(s);
    // cout << sol.reverseWords(s) <<  endl;

    return 0;
}
