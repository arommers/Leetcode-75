#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
        {
            vector<int> res1;
            vector<int> res2;
            vector<vector<int>> result;
            
            unordered_set<int> set1(nums1.begin(), nums1.end());
            unordered_set<int> set2(nums2.begin(), nums2.end());

            for (int value : set1)
            {
                if (set2.find(value) == set2.end())
                    res1.push_back(value);
            }

            for (int value : set2)
            {
                if (set1.find(value) == set1.end())
                    res2.push_back(value);
            }
            result.push_back(res1);
            result.push_back(res2);
            return result;
        }
};