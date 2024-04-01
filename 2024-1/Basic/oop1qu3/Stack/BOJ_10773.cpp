#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
	fastio;

	int K; cin >> K;
	stack<int> stk;
	for (int i = 0; i < K; i++)
	{
		int n; cin >> n;
		if (n == 0) stk.pop();
		else stk.push(n);
	}

	int sum = 0;
	while (!stk.empty()) 
	{
		sum += stk.top();
		stk.pop();
	}

	cout << sum;
}
