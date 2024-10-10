#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
using namespace std;

/*
* 2 3 1 / 1, 2, 0 / 0, 1, 2
* 1 2 3 / 0, 1, 2 / 2, 0, 1
* 
* 2 1 3 1 / 2 0 3 1 / 0 1 2 3
* 1 1 2 3 / 0 1 2 3 / 1 3 0 2
* 
* 4 1 6 1 3 6 1 4 / 4 0 6 1 3 7 2 5 / 0 1 2 3 4 5 6 7
* 1 1 1 3 4 4 6 6 / 0 1 2 3 4 5 6 7 / 1 3 6 4 0 7 2 5
*/

int n;
int a[55], b[55];
int vis[1005];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);

	for (int i = 0; i < n; i++) {
		cout << find(b, b + n, a[i]) - b + (vis[a[i]]++) << ' ';
	}

	return 0;
}
