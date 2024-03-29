#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 500000;

int n, a, b;
vector<int> v[MAX + 5];
int num[MAX + 5];
int leafSum = 0;

void dfs(int cur) {
	bool isLeaf = true;
	for (int e : v[cur]) {
		if (num[e]) continue;
		num[e] = num[cur] + 1;
		dfs(e);
		isLeaf = false;
	}
	if (isLeaf) leafSum += num[cur] - 1;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	num[1] = 1;
	dfs(1);

	if (leafSum % 2) cout << "Yes" << '\n';
	else cout << "No" << '\n';

	return 0;
}
