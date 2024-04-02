#include<bits/stdc++.h>

using namespace std;

int ran[10001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, i, Max = 0, ans = 0;
	long long low, mid, high;

	cin >> k >> n;

	for(i = 0; i < k; i++)
	{
		cin >> ran[i];
		if(Max < ran[i])
		{
			Max = ran[i];
		}
	}
	low = 1;
	high = Max;

	while(low <= high)
	{
		int cnt = 0;
		mid = (high + low) / 2;
		for(i = 0; i < k; i++)
		{
			cnt += ran[i] / mid ;
		}
		if(cnt >= n)
		{
			low = mid + 1;
			if(ans < mid)
			{
				ans = mid;
			}
		}
		else
		{
			high = mid - 1;
		}
	}

	cout << ans;

	return 0;
}
