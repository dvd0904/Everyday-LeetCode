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
        map<int, int> M;
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i])
            {
                if(i > 0 && !flowerbed[i - 1]) M[i]++;
                if((i + 1 < flowerbed.size()) && !flowerbed[i + 1]) M[i]++;
            }
        }

        int canNotPlace = M.size();
        for(auto x : M)
            canNotPlace += x.second;

        cout << "canNotPlace: " << canNotPlace << endl;


        int canPlace = flowerbed.size() - canNotPlace;
        cout << "canPlace: " << canPlace << endl;
        
        if(canPlace ==  1)
            return (n == 1 ? true : false); 
        
        if(canPlace & 1)
        {
            if((canPlace >> 1) + 1 >= n)
                return true;
        }
        else  
        {
            if((canPlace >> 1) >= n)
                return true;
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




}
