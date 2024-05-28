#include <iostream>
#include <vector>

class Solution {
    public:
        int maxArea(std::vector<int>& height) 
        {
            int maxArea = 0;
            int i = 0;
            int j = height.size() - 1;

            while (i < j)
            {
                maxArea = std::max(maxArea, std::min(height[i], height[j]) * (j - i));
                if (height[i] < height[j])
                    i++;
                else
                    j--;
            }
            return maxArea;
        }
};