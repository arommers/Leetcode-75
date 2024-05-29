#include <string>

class Solution {
    public:
        bool isVowel(char c)
        {
            return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'); 
        }
        
        int maxVowels(string s, int k) 
        {
            size_t  sum = 0;
            for (int i = 0; i < k; ++i)
            {
                if (isVowel(s[i]))
                    sum += 1;

            }

            size_t maxSum = sum;

            for (int i = k; i < s.length(); ++i)
            {
                if (isVowel(s[i]))
                    sum += 1;
                if (isVowel(s[i - k]))
                    sum -= 1;
                maxSum = max(sum, maxSum);
            }
            return maxSum;
        }
};