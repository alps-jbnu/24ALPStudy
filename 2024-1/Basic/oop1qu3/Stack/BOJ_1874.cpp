#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;


int n = 0;
vector<char> output;
stack<int> stk;

bool makeSequence();

int main()
{
	fastio;

	cin >> n;

	if (makeSequence())
		for (char c : output) cout << c << '\n';
	else cout << "NO";
}

bool makeSequence()
{
	int input = 1;

	for (int i = 0; i < n; i++)
	{
		int k; cin >> k;
		while (input <= k) { stk.push(input++); output.push_back('+'); }

		if (stk.top() != k) return false;
		stk.pop(); output.push_back('-');
	}

	return true;
}
