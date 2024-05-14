#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
	fastio;
	
	int N; cin >> N;
	queue<int> que;

	for (int i=1; i<=N; i++) que.push(i);

	while (que.size() > 1)
	{
		que.pop();
		int k = que.front(); que.pop();
		que.push(k);
	}

	cout << que.front();
}
