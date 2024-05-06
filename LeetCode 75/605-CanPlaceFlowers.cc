#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using std::vector;
using std::map;

using std::cin;
using std::cout;
using std::endl;


class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(!n)
            return true;
        
        int len = flowerbed.size();
        for(int i = 1; i < len; i++)
        {
            if(flowerbed[i])
            {
                flowerbed[i - 1] = flowerbed[i + 1] = 1;
            }
        }
        int cnt = 0;

        for(int x : flowerbed)
            if(x) cnt++;
        int canPlace = len - cnt;


    }
};

int main()
{
    int numberOfPlots, numberOfFlowers; cin >> numberOfPlots;
    vector<int> flowerbed(numberOfPlots);
    for(int &x : flowerbed) cin >> x;
    cin >> numberOfFlowers;


    Solution sol;
    cout << sol.canPlaceFlowers(flowerbed, numberOfFlowers) << " ";




}
