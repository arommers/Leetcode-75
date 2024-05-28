#include <iostream>
#include <vector>
#include <algorithm>

// class Solution 
// {
//     public:
//         void moveZeroes(vector<int>& nums) 
//         {
//            int count = 0;

//            for (int i = nums.size() - 1; i >= 0; --i)
//             {
//                 if (nums[i] == 0)
//                 {
//                     count++;
//                     nums.erase(nums.begin() + i);
//                 }
//             }
//             for (int i = count; i > 0; --i)
//                 nums.push_back(0);
//         }
// };

// better solution

class Solution
{
    public:
        void moveZeroes(std::vector<int>& nums)
        {
            int i = 0;
            int n = nums.size();
            for (int j = 0; j < n; j++)
            {
                if (nums[j] != 0)
                {
                    std::swap(nums[j], nums[i]);
                        i++;
                }
            }
        }
};