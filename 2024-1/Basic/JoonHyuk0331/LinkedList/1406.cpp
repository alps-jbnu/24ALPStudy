#include <bits/stdc++.h>
using namespace std;

int main(void) {
	//1.string to list
	string str;
	cin >> str;
	list<char> li(str.begin(), str.end());
	list<char>::iterator cursor=li.end();

	int input_number;
	cin >> input_number;

	for (int i = 0; i < input_number; i++) {
		char input;
		cin >> input;
		switch (input)
		{
		case 'L'://<--
			if (cursor == li.begin()) break;//커서가 문장의 맨 앞이면 무시됨
			cursor--;
			break;
		case 'D'://-->
			if (cursor == li.end()) break;//커서가 문장의 맨 뒤면 무시됨
			cursor++;
			break;
		case 'B'://왼쪽문자삭제
			if (cursor == li.begin()) break;//커서가 문장의 맨 앞이면 무시됨
			cursor--;
			cursor=li.erase(cursor);
			break;
		case 'P'://$라는 문자를 커서 왼쪽에 추가함(문자왼쪽=이터레이터)
			char c;
			cin >> c;
			li.insert(cursor, c);
			break;
		}
	}

	for (auto c : li) {
		cout << c;
	}
}
