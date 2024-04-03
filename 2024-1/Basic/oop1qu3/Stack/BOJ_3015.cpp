#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define pii pair<int, int>

// input:  3   3   2   2   1   1   2   2   3   3
// ================================================
// stk:	       3  (3) (3) (3) (3) (3) (3)  3   3
//                 3   3  (3) (3)  3   3   3   3
//                     2  (2) (2)  2   2   2   3
//                         2   2   2   2   2
//                             1   1   2   2
//                                 1       2

int main()
{
	fastio;

	int N; cin >> N;
	stack<int> height;
	stack<pii> skip;

	long long ans = 0;

	while (N--)
	{
		int h; cin >> h;

		if (!height.empty() && h < height.top()) 
      skip.push(pii(height.top(), height.size() - 1));
		while (!skip.empty() && h >= skip.top().first) skip.pop();

		ans += height.size();
		if (!skip.empty()) ans -= skip.top().second;

		while (!height.empty() && h > height.top()) height.pop();
		height.push(h);
	}

	cout << ans;
}
