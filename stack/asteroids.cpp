#include <vector>
#include <stack>

using namespace std;

class Solution {
    public:
            vector<int> asteroidCollision(vector<int>& asteroids)
            {
                stack<int> myStack;

                for (int ele : asteroids)
                {
                    if (ele > 0)
                        myStack.push(ele);
                    else 
                    {
                        while (!myStack.empty() && myStack.top() > 0 && myStack.top() < -ele)
                            myStack.pop();
                        
                        if (myStack.empty() || myStack.top() < 0)
                            myStack.push(ele);

                        if (!myStack.empty() && myStack.top() == -ele)
                            myStack.pop();
                    }
                }
                vector<int> myVec(myStack.size());
                int i = myVec.size() - 1;
                while (!myStack.empty())
                {
                    myVec[i] = myStack.top();
                    myStack.pop();
                    i--;
                }
                return myVec;
            }
};