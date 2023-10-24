#include <iostream>
#include <vector>
using namespace std;

const int N = 5; // size of the maze
vector<vector<int>> maze = {
    {1, 1, 0, 0, 1},
    {0, 1, 01, 0, 1},
    {1, 1, 0, 1, 0},
    {1, 0, 1, 1, 1},
    {1, 1, 1, 0, 1}
}; // 1 represents the path, 0 represents the wall

vector<vector<int>> solution(N, vector<int>(N, 0)); // solution matrix

// function to print the solution matrix
void printSolution() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
}

// function to check if (i, j) is valid cell in maze
bool isValid(int i, int j) {
    return (i >= 0 && i < N && j >= 0 && j < N && maze[i][j] == 1);
}

bool solveMaze(int i, int j) {
    // base case: if we have reached the end cell
    if(i == N-1 && j == N-1) {
        solution[i][j] = 1;
        return true;
    }

    // check if (i, j) is a valid cell in the maze
    if(isValid(i, j)) {
        // mark (i, j) as part of solution
        solution[i][j] = 1;

        // recursively check if we can reach the end cell by moving right
        if(solveMaze(i, j+1)) {
            return true;
        }

        // recursively check if we can reach the end cell by moving down
        if(solveMaze(i+1, j)) {
            return true;
        }
        

        // if we cannot reach the end cell from (i, j), backtrack
        solution[i][j] = 0;
        return false;
    }
    return false;
}

int main() {
    if(solveMaze(0,0)) {
        printSolution();
    } else {
        cout << "No solution exists." << endl;
    }
    return 0;
}