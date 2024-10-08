#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string s; 
	int count = 0;
	int cnt[26] = { 0 };

	cin >> s; //문자열 입력받음
	char c;
	for (int i = 0; i < s.length(); i++) {
		c = s[i]; 
		cnt[c - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		cout << cnt[i] << " ";

	return 0;
}
