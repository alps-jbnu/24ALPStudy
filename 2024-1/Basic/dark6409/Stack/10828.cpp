#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  int n; cin>>n;
  
  string order;
  int a=0;
  for(int i=0; i<n; i++){
    cin >> order;
    if(order == "push"){
      cin >> a;
      s.push(a);
    }
    else if(order == "pop"){
      if(!s.empty()) { cout << s.top() << endl; s.pop(); }
      else if(s.empty()) cout << -1 << endl;
    }
    else if(order == "size"){
      if(s.empty()) cout << 0 << endl;
      else cout << s.size() << endl;
    }
    else if(order == "empty")
      cout << s.empty() << endl;
    else if(order == "top"){
      if(s.empty()) cout << -1 << endl;
      else cout << s.top() << endl;
    }
  }
}
