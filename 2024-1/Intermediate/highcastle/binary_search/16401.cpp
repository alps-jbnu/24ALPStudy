#include<bits/stdc++.h>

using namespace std;

vector<int> snack;

int check(int x)
{
	int cnt = 0;
	for(int i : snack)
	{
		cnt += i / x;
	}

	return cnt;
}

int main(void)
{
	int m, n; cin >> m >> n;
	snack.resize(n);

	for(int i = 0; i < n; i++)
	{
		cin >> snack[i];
	}

	sort(snack.begin(), snack.end());

	int left = 1, right = snack[n-1], mid, ans = 0;

	while(left <= right)
	{
		mid = (left + right) / 2;

		if(m <= check(mid))
		{
			left = mid + 1;
			ans = mid;
		}
		else
		{
			right = mid - 1;
		}
	}

	cout << ans;

	return 0;
}
