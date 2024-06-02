#include <iostream>
#include <vector>
#include <map>

using namespace std;

// int equalPairs(vector<vector<int>> &grid)
// {
//     int count = 0;
//     int n = grid.size();

//     // Outer loop: iterate over each row
//     for (int i = 0; i < n; ++i)
//     {
//         // Inner loop: iterate over each column
//         for (int j = 0; j < n; ++j)
//         {
//             bool isEqual = true;
//             // Innermost loop: compare elements of row i and column j
//             for (int k = 0; k < n; ++k)
//             {
//                 if (grid[i][k] != grid[k][j])
//                 {
//                     isEqual = false;
//                     break;
//                 }
//             }
//             if (isEqual)
//                 ++count;
//         }
//     }
//     return count;
// }

class Solution {
    public:
        int equalPairs(vector<vector<int>>& grid) 
        {
            int count = 0;
            int n = grid.size();
            map<vector<int>, int> map1;

            for (int i = 0; i < n; ++i)
                map1[grid[i]]++;
            
            for (int i = 0; i < n; ++i)
            {
                vector<int> tmp;
                for (int j = 0; j < n; ++j)
                    tmp.push_back(grid[j][i]);
                count += map1[tmp];
            }
            return count;
        }
};