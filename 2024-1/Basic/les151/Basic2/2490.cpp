#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 3; i++) {
		int a;
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a;
			if (a == 1)
				cnt++;
		}
		if (cnt == 0) {
			cout << "D\n";
		}
		if (cnt == 1) {
			cout << "C\n";
		}
		if (cnt == 2) {
			cout << "B\n";
		}
		if (cnt == 3) {
			cout << "A\n";
		}
		if (cnt == 4) {
			cout << "E\n";
		}
	}
	return 0;
}
