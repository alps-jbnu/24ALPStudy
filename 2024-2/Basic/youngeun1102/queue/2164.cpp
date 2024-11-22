#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	cin >> n;
	for (int i = 1; i <= n; i++) q.push(i);
	while (q.size()!=1) {
		q.pop();
		int tmp = q.front();
		q.push(tmp);
		q.pop();
	}
	cout << q.front();
}
