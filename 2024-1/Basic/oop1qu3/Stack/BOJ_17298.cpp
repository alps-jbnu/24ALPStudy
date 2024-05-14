#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0);
using namespace std;

const int MAX_SIZE = 1e6;
int arr[MAX_SIZE] = {};

int main()
{
	int N; cin >> N;
	stack<pair<int, int>> stk;

	for (int i = 0; i < N; i++)
	{
		int a; cin >> a;

		while (!stk.empty() && a > stk.top().second)
		{
			arr[stk.top().first] = a;
			stk.pop();
		}

		stk.push({ i, a });
	}

	while (!stk.empty())
	{
		arr[stk.top().first] = -1;
		stk.pop();
	}

	for (int i = 0; i < N; i++) cout << arr[i] << ' ';
}
