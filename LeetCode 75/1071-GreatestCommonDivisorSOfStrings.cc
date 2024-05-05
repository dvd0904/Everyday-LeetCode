#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;


class Solution {
public:
    int gcd(int a, int b)
    {
        if(b == 0)
            return a;
        return gcd(b, a % b);
    }

    string gcdOfStrings(string str1, string str2) 
    {
        if((str1 + str2) != (str2 + str1))
            return "";
        int l1 = str1.size(), l2 = str2.size();
        int l3 = gcd(l1, l2);

        return str1.substr(0, l3);
    }
};


int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Solution sol;
    cout << sol.gcdOfStrings(s1, s2) << endl;

}
