#include<bits/stdc++.h>

using namespace std;

int dp[301], gye[301];

void upgye(int n)
{
	dp[0] = gye[0];
	dp[1] = max(gye[0] + gye[1], gye[1]);
	dp[2] = max(gye[0] + gye[2], gye[1] + gye[2]);

	for(int i = 3; i < n; i++)
	{
		dp[i] = max(dp[i-2] + gye[i], dp[i-3] + gye[i-1] + gye[i]);
	}

	cout << dp[n-1];
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, i;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> gye[i];
	}

	upgye(n);

	return 0;
}
