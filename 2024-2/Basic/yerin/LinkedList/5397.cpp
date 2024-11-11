#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int L;
	cin >> L;
	for (int i = 0; i < L; i++) {
		list<char> key;
		list<char>::iterator iter=key.begin();
		string s;
		cin >> s;
		
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '<') { if (iter != key.begin()) iter--; }
			else if (s[j] == '>') { if (iter != key.end()) iter++; }
			else if (s[j] == '-') {
				if (iter != key.begin()) iter = key.erase(--iter); }
			else key.insert(iter, s[j]);
		}
		for (iter = key.begin(); iter != key.end(); iter++) cout << *iter;
		cout << "\n";
	}
	
	return 0;
}
