#include<bits/stdc++.h>

using namespace std;

vector<long long> liquid;
long long ans[3] = {0x3f3f3f3f, 0x3f3f3f3f, 0x3f3f3f3f};

long long test = 0x3f3f3f3f;

int main(void)
{
	int n; cin >> n;
	liquid.resize(n);

	for(int i = 0; i < n; i++)
	{
		cin >> liquid[i];
	}

	sort(liquid.begin(), liquid.end());

	long long left = 0, mid = left + 1, right = n-1;

	ans[0] = liquid[left];
	ans[1] = liquid[mid];
	ans[2] = liquid[right];

	for(int i = 0; i < n-2; i++)
	{
		left = i;
		mid = left+1;
		right = n-1;

		while(mid < right)
		{
			long long check = liquid[left] + liquid[mid] + liquid[right];

			if(abs(check) < test)
			{
				test = abs(check);
				ans[0] = liquid[left];
				ans[1] = liquid[mid];
				ans[2] = liquid[right];
			}

			if(check < 0)
			{
				mid++;
			}
			else
			{
				right--;
			}
		}
	}

	for(int i = 0; i < 3; i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}
