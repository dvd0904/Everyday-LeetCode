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
        string reverseVowels(string s) 
        {
            string vowels = "ueoaiUEOAI";

            int l = 0, r = s.size();
            while(l < r)
            {
                if(vowels.find(s[l]) == std::string::npos)
                    l++;

                if(vowels.find(s[r]) == std::string::npos)
                    r--;
                
                if(vowels.find(s[l]) != std::string::npos && vowels.find(s[r]) != std::string::npos)
                {
                    char temp = s[l];
                    s[l] = s[r];
                    s[r] = temp;
                    l++;
                    r--;
                }
            }

            return s;
        }
};


int main()
{

    string s; cin >> s;
    Solution sol;

    cout << sol.reverseVowels(s) << endl;

}
