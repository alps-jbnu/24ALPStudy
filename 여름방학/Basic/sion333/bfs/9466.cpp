#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

pair<int, int> arr[100002]; // X = 선호 숫자, Y = 상태 (-3(시작) , -2(진행중), -1(초기값), 0(불가능), 1(가능))
bool tracing = 0;
int cur;
vector <int> temp;
int main()  {
  int T;
  cin >> T;

  int n;

  while (T--)
  {
    int cnt = 0;
    cin >> n; 
    for (int i = 1; i <= n; i++) {
      cin >> arr[i].X;
      arr[i].Y = -1;
      if (arr[i].X == i)  arr[i].Y = 1;
    }
    
    for (int i = 1; i <= n; i++) {
      if (arr[i].Y != -1) continue;
 
      arr[i].Y = -2;
      temp.push_back(i);
      cur = arr[i].X;

      while (true)  {
        if (arr[cur].Y == 0  || arr[cur].Y == 1) {
          // 불가능
          while (!temp.empty()) {
            arr[temp.back()].Y = 0;
            temp.pop_back();
            cnt++;
          }
          
          break;
        }
        if (arr[cur].Y == -2) {
          // 가능
          while (temp.back() != cur) {
            arr[temp.back()].Y = 1;
            temp.pop_back();
          }
          arr[temp.back()].Y = 1;
          temp.pop_back();
          while (!temp.empty()) {
            arr[temp.back()].Y = 0;
            temp.pop_back();
            cnt++;
          }
          break;
        }
      // 첫 방문 (-2로 만들고 게속 진행) 
        temp.push_back(cur);
        arr[cur].Y = -2;
        cur = arr[cur].X;
      }
    }
    cout << cnt << '\n';
  }
  
  return 0;
}
