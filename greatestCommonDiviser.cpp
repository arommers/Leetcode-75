#include <iostream>
#include <string>

class Solution {
public:    
    int     greatestCommonDivisor(int a, int b) {
        while(b)
        {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }
    std::string  gcdOfStrings(std::string str1, std::string str2) {

        int len1 = str1.length();
        int len2 = str2.length();
        int len = greatestCommonDivisor(len1, len2);
        std::string divisor = str1.substr(0, len);

        if (str1.find(divisor) != std::string::npos && str2.find(divisor) != std::string::npos)
        {
            if (len1 % divisor.length() == 0 && len2 % divisor.length() == 0)
                return divisor;
        }
        return "";
    }
};

int main()
{
    // std::string str1 = "ABABAB";
    // std::string str2 = "ABAB";
    std::string str1 = "LEET";
    std::string str2 = "CODE";
    Solution    solution;

    std::cout << solution.gcdOfStrings(str1, str2) << std::endl;

    return 0;
}