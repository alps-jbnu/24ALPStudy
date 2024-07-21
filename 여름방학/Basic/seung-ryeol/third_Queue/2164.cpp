#include <bits/stdc++.h>
using namespace std;

queue<int>Q;
long long N;
long long a;
string S;
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		Q.push(i);
	}
	while (Q.size() > 1) {
		Q.pop();
		a = Q.front();
		Q.pop();
		Q.push(a);
	}
	cout << Q.front();
	return 0;
}
