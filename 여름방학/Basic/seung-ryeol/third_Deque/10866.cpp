#include <bits/stdc++.h>
using namespace std;

deque<int> D;
long long N;
long long a;
string S;
int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> S;
		if (S == "push_front") {
			cin >> a;
			D.push_front(a);
		}
		else if (S == "push_back") {
			cin >> a;
			D.push_back(a);
		}
		if (S == "pop_front") {
			if(D.empty()!=1){
				cout << D.front() << '\n';
				D.pop_front();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (S == "pop_back") {
			if (D.empty() != 1) {
				cout << D.back() << '\n';
				D.pop_back();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (S == "size") {
			cout << D.size()<< '\n';
		}
		else if (S == "empty") {
			if (D.empty() != 1) {
				cout << 0 << '\n';
			}
			else {
				cout << 1 << '\n';
			}
		}
		else if (S == "front") {
			if (D.empty() != 1) {
				cout << D.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (S == "back") {
			if (D.empty() != 1) {
				cout << D.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}
