#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<char> str;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) str.push_back(s[i]);
	int M;
	cin >> M;
	list<char>::iterator iter = str.end();
	for (int i = 0; i < M; i++) {
		char commend;
		cin >> commend;

		if (commend == 'L') {
			if (iter != str.begin()) iter--;
		}
		else if (commend == 'D') {
			if (iter != str.end()) iter++;
		}
		else if(commend == 'B') {
			if (iter != str.begin()) iter = str.erase(--iter);
		}
		else if(commend == 'P'){
			char c;
			cin >> c;
			str.insert(iter, c);
		}
	}
	for (iter = str.begin(); iter != str.end(); iter++) {
		cout << *iter;
	}
	return 0;
}
