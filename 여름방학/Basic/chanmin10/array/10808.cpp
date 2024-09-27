#include <bits/stdc++.h>
using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int cnt[26] = {0};
  cin >> s;
  for(auto c : s) cnt[c - 'a']++;
  for(int i = 0; i < 26; i++) cout << cnt[i] << ' ';
  return 0;
}
