#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int arr[1000005];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int st = 0, en = 0, ans = 0, odd_cnt = 0;
  while(true) {
  	if(odd_cnt > k) {
  		if(arr[st] % 2 == 1) odd_cnt -= 1;
		st += 1;	
	}
	else if(en == n) break;
	else {
		if(arr[en] % 2 == 1) odd_cnt += 1;
		en += 1;
	}
	if(odd_cnt <= k) ans = max(ans, en-st-odd_cnt);
  }
  cout << ans;
}
