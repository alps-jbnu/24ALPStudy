#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;

	cin >> N >> K;

	queue<int> q;
	queue<int> answer;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		for (int i = 1; i < K; i++) {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		answer.push(q.front());//k번 째 빼기
		q.pop();
	}

	answer.push(q.front());
	q.pop();

	cout << "<"<<answer.front();
	answer.pop();
	while (!answer.empty()) {
		cout << ", " << answer.front();
		answer.pop();
	}
	cout << ">";

}
