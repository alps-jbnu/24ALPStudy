#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) { // 카드를 큐에 넣음
		q.push(i);
	}
	while (q.size() > 1) { // 카드가 하나 남을 때 까지
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
	return 0;
}
