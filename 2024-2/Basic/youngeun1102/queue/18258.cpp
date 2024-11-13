#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,s=0,e=0;
	int com[2000005];
	cin >> n;
	while (n--) {
		string q;
		cin >> q;
		if (q == "push") {
			cin >> com[e++];
		}
		else if (q == "pop") {
			cout << (s == e ? -1 : com[s++]) << '\n';
		}
		else if (q == "size") {
			cout << e - s << '\n';
		}
		else if (q == "empty") {
			cout << (s == e) << '\n';
		}
		else if (q == "front") {
			cout << (s == e ? -1 : com[s]) << '\n';
		}
		else if (q == "back") {
			cout << (s == e ? -1 : com[e - 1]) << '\n';
		}
	}
}
