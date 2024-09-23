#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
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
      if(!q.empty()) { cout << q.front() << endl; q.pop(); }
      else if(q.empty()) cout << -1 << endl;
    }
    else if(order == "size"){
      if(q.empty()) cout << 0 << endl;
      else cout << q.size() << endl;
    }
    else if(order == "empty")
      cout << q.empty() << endl;
    else if(order == "front"){
      if(q.empty()) cout << -1 << endl;
      else cout << q.front() << endl;
    }
    else if(order == "back"){
      if(q.empty()) cout << -1 << endl;
      else cout << q.back() << endl;
    }
  }
}
