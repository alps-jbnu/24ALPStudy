#include<bits/stdc++.h>

using namespace std;

int DP[1000001];

void dp(int n)
{
	for(int i = 2; i <= n; i++)
	{
		DP[i] = DP[i-1] + 1;

		if(i % 2 == 0)
		{
			DP[i] = min(DP[i], DP[i / 2] + 1);
		}

		if(i % 3 == 0)
		{
			DP[i] = min(DP[i], DP[i / 3] + 1);
		}
	}

	cout << DP[n];
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	dp(n);

	return 0;
}
