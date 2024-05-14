#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool board[101][101] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		bool vis[101][101] = { 0 };
		stack<int> st;
		st.push(i);
		while (!st.empty()) {
			int cur = st.top();
			st.pop();
			for (int j = 0; j < n; j++) {
				if (!board[cur][j] || vis[cur][j])
					continue;
				board[i][j] = 1;
				st.push(j);
				vis[cur][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
