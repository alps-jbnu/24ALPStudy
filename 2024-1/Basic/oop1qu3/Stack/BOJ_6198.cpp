#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

// building:   [1] [2] [3] [4] [5] [6] [7] 
// input:       8   3   7   4   4   9   2   
// output:      4   0   2   0   0   1   0
// hint:        5   2   5   4   5   7   7
// 
// stk  1 -> 1,2 -> 1,(2),3 -> 1,3,4 -> 1,3,(4),5 -> (1),(3),(5),6 -> 6,7 -> (6),(7)
// hint 0 -> 0,0 -> 0, 2 ,0 -> 0,0,0 -> 0,0, 4 ,0 ->  5 , 5 , 5 ,0 -> 0,0 ->  7 , 7


const int MAX_HEIGHT = 1e9;
const int MAX_SIZE = 80000;

int height[MAX_SIZE + 2] = {};

int main()
{
	fastio;

	int N; cin >> N;

	stack<int> stk;
	stk.push(0);

	height[0] = MAX_HEIGHT + 2;
	for (int i = 1; i <= N; i++) cin >> height[i];
	height[N + 1] = MAX_HEIGHT + 1;

	long long sum = 0;

	for (int i = 1; i <= N + 1; i++)
	{
		while (height[i] >= height[stk.top()])
		{
			sum += (i - 1) - stk.top();
			stk.pop();
		}

		stk.push(i);
	}

	cout << sum;
}
