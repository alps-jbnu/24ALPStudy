#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  deque<int> dq;
  string o;

  int n; cin >> n;

  for (int i = 0; i < n; i++){
    cin >> o;
    int a=0;
    if(o == "push_front"){
      cin >> a;
      dq.push_front(a);
    }
    else if(o == "push_back"){
      cin >> a;
      dq.push_back(a);
    }
    else if(o == "pop_front"){
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.front() << '\n';  
        dq.pop_front();
      }
    }
    else if(o == "pop_back"){
      if(dq.empty()) cout << -1 << "\n";
      else {
        cout << dq.back() << '\n';
        dq.pop_back();
      }
    }
    else if(o == "size")
      cout << dq.size() << '\n';
    else if(o == "empty")
      cout << dq.empty() << '\n';
    else if(o == "front")
      cout << (dq.empty() ? -1 : dq.front()) << '\n';
    else if(o == "back")
      cout << (dq.empty() ? -1 : dq.back()) << '\n';
  }
}
