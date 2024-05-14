#include<iostream>
using namespace std;
char board[3072][6144];
void star(int i, int j, int n) {
	if (n==3) {
		board[i][j] = '*';
		board[i + 1][j - 1] = '*';
		board[i + 1][j + 1] = '*';
		for (int k = j - 2; k <= j + 2; k++)
			board[i + 2][k] = '*';
		return;
	}
	star(i, j, n / 2);
	star(i + n / 2, j - n / 2, n / 2);
	star(i + n / 2, j + n / 2, n / 2);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			board[i][j] = ' ';
		}
	}
	star(0, n - 1, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
	return 0;
}
