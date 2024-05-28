#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {
       std::string result;
       size_t   len = std::max(word1.length(), word2.length());
       
       for (int i = 0; i < len; ++i)
        {
            if( i < word1.length())
                result += word1[i];
            if (i < word2.length())
                result += word2[i];
        }
        return result;
    }
};

int main()
{
    std::string string1 = "abcd";
    std::string string2 = "12345678";

    Solution solution;
    std::cout << solution.mergeAlternately(string1, string2) << std::endl;
}