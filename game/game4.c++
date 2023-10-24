#include <iostream>
#include <vector>
using namespace std;

const int N = 9; // size of the Sudoku board
const int EMPTY = 0; // empty cell

// prints the Sudoku board
void print_board(const vector<vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// returns true if a number can be placed in a given row
bool can_place_in_row(const vector<vector<int>>& board, int row, int num) {
    for (int i = 0; i < N; i++) {
        if (board[row][i] == num) {
            return false;
        }
    }
    return true;
}

// returns true if a number can be placed in a given column
bool can_place_in_col(const vector<vector<int>>& board, int col, int num) {
    for (int i = 0; i < N; i++) {
        if (board[i][col] == num) {
            return false;
        }
    }
    return true;
}

// returns true if a number can be placed in a given subgrid
bool can_place_in_subgrid(const vector<vector<int>>& board, int row, int col, int num) {
    int subgrid_row = row - row % 3;
    int subgrid_col = col - col % 3;
    for (int i = subgrid_row; i < subgrid_row + 3; i++) {
        for (int j = subgrid_col; j < subgrid_col + 3; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }
    return true;
}

// returns true if a number can be placed in a given cell
bool can_place(const vector<vector<int>>& board, int row, int col, int num) {
    return can_place_in_row(board, row, num) &&
           can_place_in_col(board, col, num) &&
           can_place_in_subgrid(board, row, col, num);
}

// returns the next empty cell in the board
bool find_empty_cell(const vector<vector<int>>& board, int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == EMPTY) {
                return true;
            }
        }
    }
    return false;
}

// solves the Sudoku puzzle using backtracking
bool solve_sudoku(vector<vector<int>>& board) {
    int row, col;
    if (!find_empty_cell(board, row, col)) {
        return true; // board is full
    }
    for (int num = 1; num <= 9; num++) {
        if (can_place(board, row, col, num)) {
            board[row][col] = num;
            if (solve_sudoku(board)) {
                return true;
            }
            board[row][col] = EMPTY; // backtrack
        }
    }
    return false; // no solution found
}

int main() {
    // initialize the Sudoku board
    vector<vector<int>> board(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
}