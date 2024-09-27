#include <bits/stdc++.h>
using namespace std;

int main(void){
  deque<int> deq;
  int N;
  string cmd;
  int inp;
  cin >> N;
  while (N--)
  {
    cin >> cmd;
    if (cmd == "push_front") {
      cin >> inp;
      deq.push_front(inp);
    }
    else if (cmd == "push_back") {
      cin >> inp;
      deq.push_back(inp);
    }
    else if (cmd == "pop_front") {
      if (deq.empty())
        cout << "-1\n";
      else {
        cout << deq.front() << '\n';
        deq.pop_front();
      }
    }
    else if (cmd == "pop_back") {
      if (deq.empty())
        cout << "-1\n";
      else {
        cout << deq.back() << '\n';
        deq.pop_back();
      }
    }
    else if (cmd == "size") {
      cout << deq.size() << '\n';
    }
    else if (cmd == "empty") {
      cout << deq.empty() << '\n';
    }
    else if (cmd == "front") {
      if (deq.empty())
        cout << "-1\n";
      else
        cout << deq.front() << '\n';
    }
    else if (cmd == "back")
      if (deq.empty())
        cout << "-1\n";
      else
        cout << deq.back() << '\n';
  }
  
}
