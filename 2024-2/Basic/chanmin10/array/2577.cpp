#include <bits/stdc++.h>
using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int i, num[3], mul = 1, cnt[10] = {};
  for(i = 0; i < 3; i++){
    cin >> num[i];
    mul *= num[i];
  }
  while(mul){
    cnt[mul%10]++;
    mul /= 10;
  }
  for(i = 0; i < 10; i++) cout << cnt[i] << '\n';
  return 0;
}
