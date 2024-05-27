#include <iostream>
#include <vector>
#include <climits>

class Solution
{
    public:
        bool increasingTriplet(std::vector<int>& nums)
        {
            int n = nums.size();
            int primary = INT_MAX;
            int secondary = INT_MAX;

            for(int i = 0; i < n; ++i)
            {
                if(nums[i] <= primary)
                    primary = nums[i];
                else if(nums[i] <= secondary)
                    secondary = nums[i];
                else
                    return true;
            }
            return false;
        }
};

int main()
{
    std::vector<int>    nums = {2, 1, 5, 0, 4, 6};
    Solution solution;

    std::cout << (solution.increasingTriplet(nums) == 1 ? "true" : "false") << std::endl;
    return 0;
}