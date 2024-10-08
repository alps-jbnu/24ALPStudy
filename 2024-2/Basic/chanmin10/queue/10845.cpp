#include <bits/stdc++.h>
using namespace std;

const int MX = 10000;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
  dat[tail++] = x;
}

void pop(){
  head++;
}

int size(){
  return tail - head;
}

int empty(){
  if(head == tail) return 1;
  else return 0;
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail - 1];
}


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  string str;
  cin >> n;
  while(n--) {
    cin >> str;
    if(str == "push") {
      int x;
      cin >> x;
      push(x);
    }
    else if(str == "pop") {
      if(empty()) cout << "-1" << '\n';
      else {
        cout << front() << '\n';
        pop();
      }
    }
    else if(str == "size") {
      cout << size() << '\n';
    }
    else if(str == "empty") {
      cout << empty() << '\n';
    }
    else if(str == "front") {
      if(empty()) cout << "-1" << '\n';
      else cout << front() << '\n';
    }
    else if(str == "back") {
      if(empty()) cout << "-1" << '\n';
      else cout << back() << '\n';
    }
  }
  return 0;
}
