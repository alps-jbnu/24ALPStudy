#include <iostream>
#include <list>
using namespace std;

int main(void) {
	string text;
	int n;

	cin >> text >> n;

	list<char> L;
	for (auto c : text) L.push_back(c);
	auto cursor = L.end();

	for (int i = 0; i < n; i++) {
		char commend;
		cin >> commend;

		if (commend == 'L')
		{
			if (cursor == L.begin())
				continue;
			cursor--;
		}
		else if (commend == 'D')
		{
			if (cursor == L.end())
				continue;
			cursor++;
		}
		else if (commend == 'B')
		{
			if (cursor == L.begin())
				continue;
			cursor--;
			cursor = L.erase(cursor);
		}
		else if (commend == 'P')
		{
			char input;
			cin >> input;
			L.insert(cursor, input);
		}
	}

	for (auto c : L) cout << c;

	return 0;
}
