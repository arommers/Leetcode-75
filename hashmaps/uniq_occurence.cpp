#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) 
        {
            unordered_map<int, int>   map1;
            unordered_set<int>        set1;

            for (int entry : arr)
                map1[entry]++;

            for (auto &entry : map1)
            {
                if(!set1.insert(entry.second).second)
                    return false;
            }
            return true;
        }
};