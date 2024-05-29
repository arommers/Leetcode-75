#include <string>

class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) 
        {
            int i = 0;
            int j = 0;
            int count = 0;
            int maxLen = 0;

            while (j < nums.size())
            {
                if (nums[j] == 0)
                    count++;
                if (count > k)
                {
                    if(nums[i] == 0)
                        count--;
                    i++;
                }
                maxLen = max(maxLen, j - i + 1);
                j++;
            }
            return maxLen
        }
};