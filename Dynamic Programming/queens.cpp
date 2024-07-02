#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<int> queens(n, -1);
        solve(0, n, queens, board, result);
        return result;
    }

private:
    void solve(int row, int n, vector<int>& queens, vector<string>& board, vector<vector<string>>& result) {
        if (row == n) {
            result.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isValid(row, col, queens)) {
                queens[row] = col;
                board[row][col] = 'Q';
                solve(row + 1, n, queens, board, result);
                board[row][col] = '.';
                queens[row] = -1;
            }
        }
    }

    bool isValid(int row, int col, const vector<int>& queens) {
        for (int i = 0; i < row; i++) {
            int prow = i;
            int pcol = queens[i];
            if (pcol == col || abs(col - pcol) == abs(row - prow)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    vector<vector<string>> solutions = solution.solveNQueens(n);
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}
