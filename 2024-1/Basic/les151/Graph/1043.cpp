#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int p;
	cin >> p;
	bool known[51] = { 0 };
	for (int i = 0; i < p; i++) {
		int num;
		cin >> num;
		known[num] = 1;
	}
	int arr[51][51] = { 0 };
	bool a[51][51] = { 0 };
	for (int i = 0; i < m; i++) {
		cin >> arr[i][0];
		for (int j = 1; j <= arr[i][0]; j++) {
			cin >> arr[i][j];
			for (int k = 1; k <= j; k++) {
				a[arr[i][j]][arr[i][k]] = 1;
				a[arr[i][k]][arr[i][j]] = 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		bool pos = true;
		for (int j = 1; j <= arr[i][0]; j++) {
			bool vis[51] = { 0 };
			stack<int> st;
			st.push(arr[i][j]);
			vis[arr[i][j]] = 1;
			if (known[arr[i][j]]) {
				pos = false;
				break;
			}
			while (!st.empty()) {
				int cur = st.top();
				st.pop();
				for (int k = 1; k < 51; k++) {
					if (!a[cur][k] || vis[k])
						continue;
					if (known[k]) {
						pos = false;
						break;
					}
					st.push(k);
					vis[k] = 1;
				}
				if (!pos)
					break;
			}
			if (!pos)
				break;
		}
		if (pos)
			ans++;
	}
	cout << ans;
	return 0;
}
