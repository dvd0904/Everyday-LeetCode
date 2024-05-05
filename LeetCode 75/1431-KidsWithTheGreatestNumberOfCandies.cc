#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::max_element;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> res;
        int max = *max_element(candies.begin(), candies.end());
        for(int candy : candies)
        {
            if(candy + extraCandies >= max)
                res.push_back(true);
            else  
                res.push_back(false);
        }

        return res;
    }
};

int main()
{
    int numberOfKids;
    cin >> numberOfKids;
    vector<int> candies(numberOfKids);
    for(int &candy : candies) cin >> candy;
    int extraCandies; cin >> extraCandies;

    Solution sol;
    vector<bool> res = sol.kidsWithCandies(candies, extraCandies);
    for(bool x : res) cout << ((x == true) ? "true" : "false") << " ";

    return 0;

}