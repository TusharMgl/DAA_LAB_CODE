#include <stdio.h>
#include <stdbool.h>
#define N 8

void print_Solution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%c ", board[i][j] ? 'Q' : '.');
        printf("\n");
    }
    printf("\n");
}

bool is_Safe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solve_N_QueensUtil(int board[N][N], int col) {
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++) {
        if (is_Safe(board, i, col)) {
            board[i][col] = 1;

            if (solve_N_QueensUtil(board, col + 1))
                return true;

            board[i][col] = 0; 
        }
    }
    return false;
}

void solve_N_Queens() {
    int board[N][N] = {0};

    if (!solve_N_QueensUtil(board, 0)) {
        printf("No solution exists\n");
        return;
    }
    print_Solution(board);
}

int main() {
    solve_N_Queens();
    return 0;
}