#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        bool closeStrings(string word1, string word2) 
        {
            unordered_map<char, int> map1;
            unordered_map<char, int> map2;
            vector<int> result1;
            vector<int> result2;

            if (word1.length() != word2.length())
                return false;

            for (char c : word1)
                map1[c]++;

            for (char c : word2)
                map2[c]++;
            
            if (map1.size() != map2.size())
                return false;
            
            for (auto &entry : map1)
            {
                if (map2.find(entry.first) == map2.end())
                    return false;
            }

            for (auto &entry : map1)
                result1.push_back(entry.second);
            for (auto &entry : map2)
                result2.push_back(entry.second);
            
            sort(result1.begin(), result1.end());
            sort(result2.begin(), result2.end());

            return result1 == result2;
        }
};