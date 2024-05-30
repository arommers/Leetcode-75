#include <vector>


class Solution {
    public:
        int largestAltitude(std::vector<int>& gain) 
        {
            int maxAlti = 0;
            int curAlti = 0;
            int n = gain.size();

            for (int i = 0; i < n; ++i)
            {
                curAlti += gain[i];
                maxAlti = std::max(maxAlti, curAlti);
            }
            return maxAlti;
        }
};