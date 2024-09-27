#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<int> st;
  int n, x;
  string str;
  cin >> n;
  while(n--) {
    cin >> str;
    if(str == "push") {
      cin >> x;
      st.push(x);
    }
    else if(str == "top"){
      if(!st.empty()) cout << st.top() << '\n';
      else cout << "-1" << '\n';
    }
    else if(str == "pop"){
      if(!st.empty()){
        cout << st.top() << '\n';
        st.pop();
      }
      else cout << "-1" << '\n';
    }
    else if(str == "size"){
      cout << st.size() << '\n';
    }
    else if(str == "empty"){
      cout << st.empty() << '\n';
    }
  }
  return 0;
}
