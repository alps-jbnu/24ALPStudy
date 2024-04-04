#include <bits/stdc++.h>
using namespace std;

int a[1004];
int dp[1004];

int main(void) {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] = a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
		}
	}
	cout << *max_element(dp, dp+n);
}
