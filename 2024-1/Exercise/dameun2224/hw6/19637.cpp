#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<int> v;
vector<string> s;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string str;
		int num;
		cin >> str >> num;
		if (v.empty() || num > v.back()) {
			v.push_back(num);
			s.push_back(str);
		}
	}

	while (m--) {
		int t;
		cin >> t;
		int key1 = lower_bound(v.begin(), v.end(), t) - v.begin();
		int key2 = upper_bound(v.begin(), v.end(), t) - v.begin();
		//int key;
		//cout << key1 << ' ' << key2 << '\n';
		//if (key1 == key2) key = key1;
		cout << s[key1] << '\n';
	}

	return 0;
}
