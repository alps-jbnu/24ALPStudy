#include<bits/stdc++.h>

using namespace std;

vector<long long> liquid;

long long test = 0x3f3f3f3f;

int main(void)
{
	int n; cin >> n;
	liquid.resize(n);

	for(int i = 0; i < n; i++)
	{
		cin >> liquid[i];
	}

	long long ans = 0;

	sort(liquid.begin(), liquid.end());

	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			long long val = liquid[i] + liquid[j];

			auto lb = lower_bound(liquid.begin() + j + 1, liquid.end(), -liquid[i] - liquid[j]);
			auto ub = upper_bound(liquid.begin() + j + 1, liquid.end(), -liquid[i] - liquid[j]);
			ans += ub - lb;
		}
	}

	cout << ans;
	

	return 0;
}
