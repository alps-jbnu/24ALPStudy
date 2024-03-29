#include<iostream>
#include<list>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	list<char> ls(str.begin(), str.end());
	list<char>::iterator it = ls.end();
	int n;
	cin >> n;
	char order;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == 'P') {
			char ch;
			cin >> ch;
			ls.insert(it, ch);
		}
		if (order == 'L') {
			if(it!=ls.begin())
				it--;
		}
		if (order == 'D') {
			if (it != ls.end())
				it++;
		}
		if (order == 'B') {
			if (it != ls.begin()) {
				it--;
				it = ls.erase(it);
			}
		}
	}
	for (it=ls.begin(); it!=ls.end(); it++)
		cout << *it;
	return 0;
}
