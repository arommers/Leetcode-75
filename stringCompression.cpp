#include <iostream>
#include <vector>

class Solution
{
    public:
        int compress(std::vector<char>& chars)
        {
            int n = chars.size();
            int writeIndex = 0;

            for (int i = 0; i < n; )
            {
                char currentChar = chars[i];
                int count = 0;

                while (i < n && chars[i] == currentChar)
                {
                    i++;
                    count++;
                }

                chars[writeIndex++] = currentChar;

                if (count > 1)
                {
                    std::string countStr = std::to_string(count);
                    for (char c : countStr)
                        chars[writeIndex++] = c;
                }
            }
            chars.resize(writeIndex);
            return writeIndex;
        }
};

int main()
{
    std::vector<char> input = {'a', 'a', 'b', 'c', 'c', 'c'};
    Solution solution;
    int result = solution.compress(input);


    std::cout << "Compressed Characters: ";
    for (char c : input)
    {
        std::cout << c;
    }
    std::cout << " with size " << result << std::endl;
    return 0;
}