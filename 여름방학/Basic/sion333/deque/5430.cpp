#include <bits/stdc++.h>
using namespace std;

int main(void){
  deque<int> deq;
  int T;

  string func;
  char cmd;
  bool reversed = 0;
  bool errored = 0;

  int n;
  string inni;
  int i, cur;

  cin >> T;
  while (T--)
  {
    cin >> func;
    cin >> n;
    cin >> inni;
    i = 1;
    cur = 0;
    reversed = 0;
    errored = 0;
    // input
    while (deq.size() < n)
    {
      if ('0' <= inni[i] && inni[i] <= '9') {
        cur *= 10;
        cur += inni[i] - '0';
      }
      else {
        deq.push_back(cur);
        cur = 0;
      }
      i++;
    }

    // function
    for (char cmd : func) {
      if (cmd == 'R') {
        reversed = !reversed;
      }
      
      else {  // cmd == 'D'

        if (deq.empty()) {
          cout << "error" << '\n';
          errored = 1;
          break;
        }

        if (reversed)
          deq.pop_back();
        else
          deq.pop_front();
      }
    }
    if (errored)  continue;  // to next case


    // cout
    cout << '[';
    if (deq.empty()) {
      cout << ']' << '\n';
      continue;
    }
    int size = deq.size();
    if (reversed) {
      while (deq.size() > 1) {
        cout << deq.back() << ',';
        deq.pop_back();
      }
      
      cout << deq.back() << ']' << '\n';
      deq.pop_back();
    }
    else {
      while (deq.size() > 1) {
        cout << deq.front() << ',';
        deq.pop_front();
      }
      cout << deq.front() << ']' << '\n';
      deq.pop_front();
    }
  }
  
}
