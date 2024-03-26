#include<iostream>
#include<list>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		list<char> ls;
		list<char>::iterator it = ls.begin();
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '<') {
				if (it != ls.begin())
					it--;
			}
			else if (str[i] == '>') {
				if (it != ls.end())
					it++;
			}
			else if (str[i] == '-') {
				if (it != ls.begin()) {
					it--;
					it = ls.erase(it);
				}
			}
			else {
				ls.insert(it, str[i]);
			}
		}
		for (it = ls.begin(); it != ls.end(); it++) {
			cout << *it;
		}
		cout << "\n";
	}
	return 0;
}
