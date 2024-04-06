#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	int t; cin >> t;

	while(t--)
	{
		int n; cin >> n;
		int dp[10001] = {0,};
		int coins[21] = {0,};

		for(int i = 1; i <= n; i++)
		{
			cin >> coins[i];
		}

		int m; cin >> m;
		dp[0] = 1;

		for(int i = 1; i <= n; i++)
		{
			for(int j = coins[i]; j <= m; j++)
			{
				dp[j] = dp[j] + dp[j-coins[i]];
			}
		}

		cout << dp[m] << "\n";
		
	}

	return 0;
}
