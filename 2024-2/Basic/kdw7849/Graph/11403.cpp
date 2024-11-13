#include <bits/stdc++.h>
using namespace std;
int N;
bool arr[100][100];
bool check[100];

bool dfs(int start, int end) {
	fill(check, check + N, 0);
	stack<int>S;
	S.push(start);
	while (!S.empty()) {
		int cur = S.top();
		S.pop();

		if (check[cur])
			continue;
		if (cur != start)
			check[cur] = 1;

		for (int i = 0; i < N; i++) {
			if (check[i])
				continue;
			if (arr[cur][i]) {
				if (i == end)
					return true;
				S.push(i);
			}
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << dfs(i, j) << ' ';
		}
		cout << '\n';
	}
}
