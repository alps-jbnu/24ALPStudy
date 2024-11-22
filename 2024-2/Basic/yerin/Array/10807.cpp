#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, v, num;
	int count[201] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		count[num + 100]++;
	}
	cin >> v;
	cout << count[v + 100];
	return 0;
}
