#include <bits/stdc++.h>

using namespace std;

void drawStars(vector<vector<char>>& board, int x, int y, int size) {
    if (size == 3) {
        board[x][y] = '*';
        board[x + 1][y - 1] = '*';
        board[x + 1][y + 1] = '*';
        for (int i = 0; i < 5; ++i) {
            board[x + 2][y - 2 + i] = '*';
        }
    }
    else {
        int newSize = size / 2;
        drawStars(board, x, y, newSize);
        drawStars(board, x + newSize, y - newSize, newSize);
        drawStars(board, x + newSize, y + newSize, newSize);
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<char>> board(N, vector<char>(2 * N - 1, ' '));

    drawStars(board, 0, N - 1, N);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2 * N - 1; ++j) {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}
