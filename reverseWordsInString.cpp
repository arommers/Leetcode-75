#include <iostream>
#include <string>

class Solution {
public:
    std::string reverseWords(std::string s)
    {
        int i;
        int j = s.length() - 1;
        int len = j;
        std::string result;

        while(j >= 0)
        {
            while(j >= 0 && s[j] == ' ')
                j--;
            while(j >= 0 && s[j] != ' ')
                j--;
            if (j >= -1)
            {
                i = j + 1;
                while(i <= len && s[i] != ' ')
                {
                    result += s[i];
                    i++;
                }
                if (j >= 0)
                    result += ' ';
            }
            j--;
        }
        if (result.back() == ' ')
            result.pop_back();
        return result;
    }
};

int main()
{
    std::string str1 = "Hello world I am bulbasaur!";
    Solution solution;

    std::cout << solution.reverseWords(str1) << std::endl;
}