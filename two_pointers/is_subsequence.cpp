#include <iostream>
#include <string>

class Solution {
    public:
        bool isSubsequence(std::string s, std::string t)
        {
            int i = 0;
            int j = 0;
            int len1 = t.length();
            int len2 = s.length();

            while (j < len2 && i < len1)
            {
                if (s[j] == t[i])
                    j++;
                i++;
                if (j == s.length())
                    return true;
            }
            return (j == s.length());
        }
};