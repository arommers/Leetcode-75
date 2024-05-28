#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
    public:
        int maxOperations(std::vector<int>& nums, int k) 
        {
            int count = 0;
            int sum;
            int i = 0;
            int j = nums.size() - 1;

            std::sort(nums.begin(), nums.end());

            while (i < j)
            {
                sum = nums[i] + nums[j];
                if (sum == k)
                {
                    count++;
                    i++;
                    j--;
                }
                else if (sum < k)
                    i++;
                else
                    j--;
            }
            return count;  
        }
};