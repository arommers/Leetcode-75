#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
    {
        std::vector<bool>   result;
        int maxCandies = *std::max_element(candies.begin(), candies.end());

        for (int candy : candies)
            result.push_back(candy + extraCandies >= maxCandies);

        return result;
    }
};

int main()
{
    std::vector<int>    candies = {1, 4, 3, 2, 2, 1};
    int                 extraCandies = 2;
    Solution            solution;

    std::vector<bool>    result = solution.kidsWithCandies(candies, extraCandies);
    for (bool ele : result)
        std::cout << (ele ? "true" : "false") << " ";
    std::cout << std::endl;
    
    return 0;
}