#include <vector>

class Solution {
    public:
        int pivotIndex(std::vector<int>& nums) 
        {
            int sum = 0;
            int left = 0;
            int right = 0;
            int len = nums.size();

            for(int ele : nums)
                sum += ele;
            for (int i = 0; i < len; ++i)
            {
                if (left == sum - left - nums[i])
                    return i;
                left += nums[i];
            }
            return -1;
        }
};