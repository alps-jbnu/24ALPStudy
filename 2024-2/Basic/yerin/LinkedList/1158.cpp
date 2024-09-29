#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<int> circle;
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) circle.push_back(i);
	list<int>::iterator iter = circle.begin();
	cout << "<";
	while (circle.size()>1) {
		for (int j = 1; j < K; j++) {
			iter++;
			if (iter == circle.end()) iter = circle.begin();
		}
		cout << *iter << ", ";
		iter = circle.erase(iter);
		if (iter == circle.end()) iter = circle.begin();
	}
	cout << *iter << ">";
	return 0;
}
