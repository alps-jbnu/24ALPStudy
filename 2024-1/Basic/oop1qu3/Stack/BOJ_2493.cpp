#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int MAX_SIZE = 500001;
const int MAX_HEIGHT = 1e8;
int height[MAX_SIZE] = {};

int main()
{
	fastio;

	int N; cin >> N;
	stack<int> stk;

	height[0] = MAX_HEIGHT;
	stk.push(0);

	for (int i = 1; i <= N; i++)
	{
		cin >> height[i];
		while (height[i] > height[stk.top()]) stk.pop();
		cout << stk.top() << ' ';
		stk.push(i);
	}
}
