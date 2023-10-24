#include<iostream>
using namespace std;

const int N = 5; // size of the maze

void printSolution(int sol[N][N]) {
    // prints the solution path
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int maze[N][N], int x, int y) {
    // checks if the given cell is safe to move into
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    // recursive function to solve the maze

    // base case
    if(x == N-1 && y == N-1) {
        sol[x][y] = 1;
        return true;
    }

    // check if the current cell is safe to move into
    if(isSafe(maze, x, y)) {
        sol[x][y] = 1; // mark the current cell as part of the solution path

        // move in the right direction
        if(solveMazeUtil(maze, x+1, y, sol)) {
            return true;
        }

        // move in the down direction
        if(solveMazeUtil(maze, x, y+1, sol)) {
            return true;
        }

        // backtrack
        sol[x][y] = 0;
        return false;
    }

    return false;
}

bool solveMaze(int maze[N][N]) {
    int sol[N][N] = {0}; // initialize solution matrix with 0s

    if(!solveMazeUtil(maze, 0, 0, sol)) {
        cout << "No solution exists" << endl;
        return false;
    }

    printSolution(sol);
    return true;
}

int main() {
    int maze[N][N] = {
        {1, 0, 0, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 1}
    };

    solveMaze(maze);
    return 0;
}