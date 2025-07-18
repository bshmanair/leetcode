// 36. Valid Sudoku

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int row = 0; row < 9; row++)
        {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++)
            {
                if (board[row][i] == '.')
                {
                    continue;
                }
                if (seen.count(board[row][i]))
                {
                    return false;
                }
                seen.insert(board[row][i]);
            }
        }

        for (int col = 0; col < 9; col++)
        {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++)
            {
                if (board[i][col] == '.')
                {
                    continue;
                }
                if (seen.count(board[i][col]))
                {
                    return false;
                }
                seen.insert(board[i][col]);
            }
        }

        for (int square = 0; square < 9; square++)
        {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j <)
            }
        }
    }
}