#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio;
	cin.tie(0);

	queue<int> Q;
	int n, ipr;
	string opr;

	cin >> n;

	while (n--)
	{
		cin >> opr;

		if (opr == "push")
		{
			cin >> ipr;
			Q.push(ipr);
		}

		else if (opr == "pop")
		{
			if (Q.empty())	cout << "-1\n";

			else
			{
				cout << Q.front() << "\n";
				Q.pop();
			}
		}

		else if (opr == "size")	cout << Q.size() << "\n";

		else if (opr == "empty")	cout << Q.empty() << "\n";

		else if (opr == "front")
		{
			if (Q.empty())	cout << "-1\n";

			else cout << Q.front() << "\n";
		}

		else
		{
			if (Q.empty())	cout << "-1\n";

			else cout << Q.back() << "\n";
		}
	}

	return 0;
}
