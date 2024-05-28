#include <vector>
#include <algorithm>

class Solution {
    public:
        double findMaxAverage(std::vector<int>& nums, int k) 
        {
            double currentSum = 0;
            for(int i = 0; i < k; ++i)
                currentSum += nums[i];
            
            double maxAverage = currentSum / k;

            for (int i = k; i < nums.size(); ++i)
            {
                currentSum += nums[i] - nums[i - k];
                maxAverage = std::max(maxAverage, currentSum / k);
            }
            return maxAverage;
        }
};