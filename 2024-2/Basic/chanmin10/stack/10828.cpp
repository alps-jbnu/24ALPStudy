#include <bits/stdc++.h>
using namespace std;

const int MX = 10000;
int st[MX], pos = 0;

void push(int x) {
  st[pos++] = x;
}

void pop() {
  pos--;
}

int empty() {
  if(pos == 0) return 1;
  else return 0;
}

int top() {
  return st[pos - 1];
}

int size() {
  return pos;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, x;
  string str;
  cin >> n;
  while(n--) {
    cin >> str;
    if(str == "push") {
      cin >> x;
      push(x);
    }
    else if(str == "top"){
      if(!empty()) cout << top() << '\n';
      else cout << "-1" << '\n';
    }
    else if(str == "pop"){
      if(!empty()){
        cout << top() << '\n';
        pop();
      }
      else cout << "-1" << '\n';
    }
    else if(str == "size"){
      cout << size() << '\n';
    }
    else if(str == "empty"){
      cout << empty() << '\n';
    }
  }
  return 0;
}
