#include <stack>
#include <algorithm>

class Solution {
    public:
        string removeStars(string s)
        {
            stack<char> myStack;
            string      result;

            for (char c : s)
            {
                if (c != '*')
                    myStack.push(c);
                else if (c == '*')
                {
                    if (!myStack.empty())
                        myStack.pop();
                }
            }
            while (!myStack.empty())
            {
                result += myStack.top();
                myStack.pop();
            }
            reverse(result.begin(), result.end());
            return result;
        }
};