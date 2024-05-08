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
        vector<int> tmp = flowerbed;
        int len = flowerbed.size();
        for(int i = 0; i < len; i++)
        {
            if(flowerbed[i])
            {
                if(i < len - 1) tmp[i + 1] = 1;
                if(i > 0) tmp[i - 1] = 1;
            }
        }
        int cnt = 0;

        for(int i = 0; i < len; i++)
        {
            if(tmp[i] == 0)
            {
                cnt++;
                if(i < len - 1) tmp[i + 1] = 1;
                if(i > 0) tmp[i - 1] = 1;
            }
        }

        if(cnt >= n)
            return true;

        return false;
    }

    // better solution
    bool solution2(vector<int>& flowerbed, int n)
    {
        if(n == 0)
            return true;
        for(int i = 0 ; i < flowerbed.size() ; i++)
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
                n--;
                if(n == 0)
                    return true;
                flowerbed[i] = 1;
            }
        return false;
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

    cout << "\nDone\n";

}
