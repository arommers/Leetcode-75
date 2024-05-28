#include <iostream>
#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n)
    {
        int     i = 0;
        int     count = 0;
        size_t  size = flowerbed.size();

        while (i < size)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0)
                && (i == size - 1 || flowerbed[i + 1] == 0))
            {
               flowerbed[i] = 1;
               count++;
               i += 2;
            }
            else
                i++;
            if (count >= n)
                return true;
        }
        return count >= n;
    }
};

int main ()
{
    std::vector<int>    flowerbed = {1, 0, 0, 0, 0, 1};
    int                 n = 2;
    Solution            solution;
    std::cout << solution.canPlaceFlowers(flowerbed, n) << std::endl;
    return 0;
}