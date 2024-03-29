#include<bits/stdc++.h>

using namespace std;

int arr[2000001];
int check[100001];

int main(void)
{
	int n, k, i, j;

	cin >> n >> k;

	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int start = 0, end = 0, ans = 0, tmp = 0;

	while(start <= end && end < n)
	{
		if(check[arr[end]] < k)
		{
			check[arr[end++]]++;
			ans = max(ans, end - start);
		}
		else if(check[arr[end]] == k)
		{
			check[arr[start++]]--;
		}
	}

	cout << ans;

	return 0;
}
