#include <bits/stdc++.h>
using namespace std;

int main()
{
	int cnt, height;
	stack<int> s;
	long long ans = 0;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> height;

		if (s.empty()) { s.push(height);	continue; }

		while (!s.empty() && s.top() <= height)	s.pop();

		ans += s.size();

		s.push(height);
	}

	cout << ans;

	return 0;
}
