#include <bits/stdc++.h>
using namespace std;

queue<int>Q;
long long N;
string S;
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> S;
		if (S == "push") {
			int a;
			cin >> a;
			Q.push(a);
		}
		else if (S == "front") {
			if(Q.empty() != 1){
				cout << Q.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (S == "back") {
			if (Q.empty() != 1) {
				cout << Q.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (S == "size") {
			cout << Q.size() << '\n';
		}
		else if (S == "empty") {
			if (Q.empty() == 1) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (S == "pop") {
			if (Q.empty() != 1) {
				cout << Q.front() << '\n';
				Q.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}
