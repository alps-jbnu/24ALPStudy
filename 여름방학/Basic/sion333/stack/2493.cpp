#include <bits/stdc++.h>
using namespace std;

struct top
{
  int h;
  int t; // 부딪힌 탑
};
  top tops[500001];

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
//
  int N;
  int comp; // 비교할 탑
  
  cin >> N;
  
  tops[0].h = 100000000; // 0번이랑 부딪힘 = 안 부딪힘
  for (int i = 1; i <= N; i++)
    cin >> tops[i].h;
  
  for (int i = 1; i <= N; i++) {
    comp = i-1;

    while (tops[comp].h < tops[i].h ) {
      comp = tops[comp].t;
    }
    tops[i].t = comp;
  }
  for (int i = 1; i <= N; i++)
    cout << tops[i].t << ' ';

   return 0;
}
