#include <bits/stdc++.h>
using namespace std;

int countMinusOne = 0, countZero = 0, countOne = 0;

bool check(const vector<vector<int>>& paper, int x, int y, int size)
{
	int first = paper[x][y];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (paper[x + i][y + j] != first) {
				return false;
			}
		}
	}
	return true;
}

void divide(const vector<vector<int>>& paper, int x, int y, int size)
{
	if (check(paper, x, y, size)) {
		if (paper[x][y] == -1)	countMinusOne++;
		else if (paper[x][y] == 0)	countZero++;
		else countOne++;
	}
	else
	{
		int newsize = size / 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				divide(paper, x + i * newsize, y + j * newsize, newsize);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio;
	cin.tie();
	cout.tie();

	int n;
	cin >> n;

	vector<vector<int>> paper(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}

	divide(paper, 0, 0, n);

	cout << countMinusOne << '\n' << countZero << '\n' << countOne;

	return 0;
}
