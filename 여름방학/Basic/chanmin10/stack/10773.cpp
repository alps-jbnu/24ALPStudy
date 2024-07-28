#include <bits/stdc++.h>
using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int k, n, sum = 0;
  stack<int> s;
  cin >> k;
  while(k--){
    cin >> n;
    if(n == 0) s.pop();
    else s.push(n);
  }
  while(!s.empty()){
    sum += s.top();
    s.pop();
  }
  cout << sum;
  return 0;
}
