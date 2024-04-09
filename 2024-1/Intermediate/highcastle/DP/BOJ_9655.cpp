#include<bits/stdc++.h>

using namespace std;

int dp[1001];

void DP(int n)
{
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			dp[i] = 1;
		}
	}
}

int main(void)
{
	int n; cin >> n;

	DP(n);

	if(dp[n])
	{
		cout << "CY";
	}
	else
	{
		cout << "SK";
	}

	return 0;
}
