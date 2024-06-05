#include <stack>

class Solution {
    public:
        string decodeString(string s) 
        {
            stack<int> counts;
            stack<string> strings;
            string currentString;
            int count = 0;

            for (char c : s) 
            {
                if (isdigit(c))
                    count = count * 10 + (c - '0');
                else if (isalpha(c))
                    currentString += c;
                else if (c == '[')
                {
                    counts.push(count);
                    strings.push(currentString);
                    count = 0;
                    currentString = "";
                }
                else if (c == ']')
                {
                    string temp = currentString;
                    for (int i = 1; i < counts.top(); ++i) {
                        temp += currentString;
                    }
                    counts.pop();
                    currentString = strings.top() + temp;
                    strings.pop();
                }
            }
        return currentString;
        }
};