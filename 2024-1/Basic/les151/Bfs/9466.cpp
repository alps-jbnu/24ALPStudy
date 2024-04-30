#include<iostream>
#include<cstring>
using namespace std;
int cnt = 0;
int arr[100001] = { 0 };
bool vis[100001] = { 0 };
bool done[100001] = { 0 };
void dfs(int num) {
	vis[num] = 1;
	int next = arr[num];
	if (!vis[next])
		dfs(next);
	else if (!done[next]) {
		for (int i = next; i != num; i = arr[i])
			cnt++;
		cnt++;
	}
	done[num] = 1;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <=n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i <= n; i++) {
			if(!vis[i])
				dfs(i);
		}
		cout << n - cnt << "\n";
		cnt = 0;
		memset(done, 0, sizeof(done));
		memset(vis, 0, sizeof(vis));
	}
	return 0;
}
