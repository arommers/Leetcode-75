#include <iostream>
#include <string>
#include <vector>

// class Solution {
// public:

    bool isVowel(char c)
    {
        c = std::tolower(c);
        return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
    }

//     std::string reverseVowels(std::string s)
//     {
//         std::vector<std::pair<int, char>> vowels;

//         for( int i = 0; i < s.length(); ++i)
//         {
//             if (isVowel(s[i]))
//                 vowels.push_back({i, s[i]});
//         }

//         size_t len = vowels.size();
//         int j = 0;
//         while (j < len / 2)
//         {
//             std::swap(vowels[j].second, vowels[len - j - 1].second);
//             j++;
//         }

//         for ( auto &vowel : vowels)
//             s[vowel.first] = vowel.second;
        
//         return s;
//     }
// };

class Solution {
    public:

        std::string reverseVowels(std::string s)
        {
            int i = 0;
            int j = s.length() - 1;

            while (i < j)
            {
                while (i < j && !isVowel(s[i]))
                    i++;
                while (i < j && !isVowel(s[j]))
                    j--;
                if (i < j)
                {
                    std::swap(s[i], s[j]);
                    i++;
                    j--;
                }
            }
            return s;
        }
};

int main()
{
    std::string str1 = "leetcode";
    Solution solution;

    std::cout << solution.reverseVowels(str1) << std::endl;
    return 0;
}