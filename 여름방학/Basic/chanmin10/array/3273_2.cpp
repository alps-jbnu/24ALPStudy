#include <bits/stdc++.h>
using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, x, i, j, cnt = 0;
  cin >> n;
  int arr[n];
  for(k = 0; k < n; k++) cin >> arr[k];
  sort(arr, arr + n);
  cin >> x;
  i = 0;
  j = n - 1;
  while(i < j){
    if(arr[i] + arr[j] == x){
      i++;
      cnt++;
    }
    else if(arr[i] + arr[j] > x) j--;
    else if(arr[i] + arr[j] < x) i++;
  }
  cout << cnt;
  return 0;
}
