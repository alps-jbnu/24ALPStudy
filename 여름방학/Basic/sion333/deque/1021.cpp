#include <bits/stdc++.h>
using namespace std;

int main(void){
  deque<int> deq;
  int N, M, inp;
  int l, r;
  int cnt = 0;
  cin >> N >> M;

  for (int i = 1; i <= N; i++)
    deq.push_back(i);
  
  while (M--) {
    cin >> inp;
    for (int i = 0; i < N; i++)
      if (deq[i] == inp) {
        l = i;
        r = deq.size() - i;

        if (l < r) {
          cnt += l;
          while (l--)
          {
            deq.push_back(deq.front());
            deq.pop_front();
          }
        }

        else {
          cnt += r;
          while (r--)
          {
            deq.push_front(deq.back());
            deq.pop_back();
          }
        }

        deq.pop_front();
        break;
      }
  }
  cout << cnt;
}
