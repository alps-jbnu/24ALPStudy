#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
	fastio;

	string S; cin >> S;
	int alphabet[26] = {};

	for (char c : S)
	{
		alphabet[c - 'a']++;
	}
  
	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << ' ';
	}
}
