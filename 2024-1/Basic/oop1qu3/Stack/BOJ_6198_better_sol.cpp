#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
	fastio;

	int N; cin >> N;

	stack<int> stk;
	long long sum = 0;

	while (N--)
	{
		long long h; cin >> h;
		while (!stk.empty() && h >= stk.top()) stk.pop();
		sum += stk.size();
		stk.push(h);
	}

	cout << sum;
}
