#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio;
	cin.tie();

	int k, n;
	stack<int> s;
	int sum = 0;
	cin >> k;

	while (k--)
	{
		cin >> n;
		if (n)	s.push(n);
		else s.pop();
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
}
