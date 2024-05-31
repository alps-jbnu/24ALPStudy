#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  queue<int> q;

  int n; cin>>n;
  string order;

  int a=0;

  for(int i=0; i<n; i++){
    cin >> order;
    if(order == "push"){
      cin >> a;
      q.push(a);
    }
    else if(order == "pop"){
      if(q.empty()) cout << -1 << '\n';
      else{
        cout << q.front() << '\n';
        q.pop();
      }
    }
    else if(order == "size")
      cout << q.size() << '\n';
    else if(order == "empty")
      cout << q.empty() << '\n';
    else if(order == "front"){
      if(q.empty()) cout << -1 << '\n';
      else cout << q.front() << '\n';
    }
    else if(order == "back"){
      if(q.empty()) cout << -1 << '\n';
      else cout << q.back() << '\n';
    }
  }
}
