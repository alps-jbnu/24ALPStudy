#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

// input: 10 3 7 4 12 2
// output: 3 0 1 0 1 0 = 5
//
// process:
// height [0] [01] [2] [3] [4] [05] [6] [7]
//         H   10   3   7   4   12   2   H
//        (H = MAX_HEIGHT + 1)
// 
// stk 0 -> 0,1 -> 0,1,2 -> 0,1,3 -> 0,1,3,4 
// arr 0 -> 0,0 -> 0,0,0 -> 0,1,0 -> 0,1,0,0 
// 
// stk -> 0,1,3 / 0,1 / 0 / 0,5 -> 0,5,6 -> 0,5 / 0 / 0,7
// arr -> 0,1,1 / 0,3 / 4 / 4,0 -> 4,0,0 -> 4,1 / 6 / 6,0


const int MAX_HEIGHT = 1e9;
const int MAX_SIZE = 80000;

stack<int> stk;
int arr[MAX_SIZE + 1] = {};
int height[MAX_SIZE + 1] = {};

void pop();

int main()
{
	fastio;

	int N; cin >> N;
	height[0] = MAX_HEIGHT + 1;
	stk.push(0);

	for (int i = 1; i <= N; i++)
	{
		int h; cin >> h;
		height[i] = (h);

		while (h > height[stk.top()]) pop();
		stk.push(i);
	}

	while (MAX_HEIGHT + 1 > height[stk.top()]) pop();

	int sum = 0;
	for (int i = 1; i <= N; i++) sum += arr[i];
	cout << sum;
}

void pop()
{
	int k = arr[stk.top()];
	stk.pop();
	arr[stk.top()] += ++k;
}
