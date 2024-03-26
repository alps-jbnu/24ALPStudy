#include<iostream>
#include<list>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	list<int> ls;
	for (int i = 1; i <= n; i++) {
		ls.push_back(i);
	}
	list<int>::iterator it = ls.begin();
	cout << "<";
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (++it == ls.end())
				it = ls.begin();
		}
		cout << *it << ", ";
		it = ls.erase(it);
		if (it == ls.end())
			it = ls.begin();
	}
	cout << *ls.begin() << ">";
	return 0;
}
