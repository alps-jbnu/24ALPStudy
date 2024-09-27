#include <bits/stdc++.h>
using namespace std;
#define h first
#define c second

stack <pair<int, int>> stk; //persons
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
//
  int N, curh, curc;
  long long cnt = 0;
  stk.push({-1, 0});

  cin >> N;
  while (N--)
  {
    cin >> curh;
    curc = 0;

    while (stk.top().h < curh && stk.top().h != -1)  {  // curc = 0, only cnt++
      stk.pop();
      cnt++;
    }
    
    if (stk.top().h > curh) {
      curc++;
    }

    else if (curh == stk.top().h) {
      curc += stk.top().c;
      curc++;
    }

    stk.push({curh, curc});
    cnt += curc;
  }
  cout << cnt;
  



   return 0;
}
