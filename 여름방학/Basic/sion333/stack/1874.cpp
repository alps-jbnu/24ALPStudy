#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
//
  int N, inp, cur = 1;
  
  bool cmd[200000];
  int i = 0;
  bool possible = 1;
  stack<int> stk;
//
  cin >> N;
  int Nc = N;
  while (Nc--)
  {
    cin >> inp;
    while (possible) {
    if (cur < inp || cur == inp) {  // 스택 수열에 존재하지 않는 경우
      stk.push(cur);
      cmd[i++] = 1;
      cur++;
    }
    else if (stk.top() == inp) {  // 존재하고 최상단인 경우
      stk.pop();
      cmd[i++] = 0;
      break;
    }
    else {
      possible = 0;
      break;
    }
    } 
  }   
  if (possible) {
    N *= 2;
    for (int i = 0; i < N; i++) {
      if (cmd[i])
        cout << '+' << '\n'; 
      else 
        cout << '-' << '\n';
    }
  }
  else 
    cout << "NO";

   return 0;
}
