#include<bits/stdc++.h>

using namespace std;

int alist[1001];
int dp[1001];

void DP(int n)
{
	int ans = 0;

	for(int i = 1; i <= n; i++)
	{
		dp[i] = alist[i];
		for(int j = 1; j <= i; j++)
		{
			if((alist[i] > alist[j]) && (dp[i] < dp[j] + alist[i]))
			{
				dp[i] = dp[j] + alist[i];
			}
		}
		ans = max(dp[i], ans);
	}
	cout << ans;
}

int main(void)
{
	int n; cin >> n;

	for(int i = 1; i <= n; i++)
	{
		cin >> alist[i];
	}

	DP(n);

	return 0;
}
