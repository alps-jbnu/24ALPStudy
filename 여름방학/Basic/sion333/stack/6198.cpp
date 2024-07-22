#include <bits/stdc++.h>
using namespace std;

// queue로 했어야 했던 거 같은데 이미 스택으로 다 짜서 arr 만들고 뒤부터 접근..
struct building
{
  int h;
  int c; // 볼 수 있는 개수
};

stack<building> stk;
int arr[800001];

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int N;
  int curh, curc;
  long long cnt = 0;
//
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> arr[i];

  stk.push({1000000000, -1});
  while (N)
  {
    curh = arr[N--];
    curc = 0;
    while (stk.top().h < curh)
    {
      curc += stk.top().c + 1;
      stk.pop();
    }
    stk.push({curh, curc});
    cnt += curc;
  }

  cout << cnt;
  
   return 0;
}
