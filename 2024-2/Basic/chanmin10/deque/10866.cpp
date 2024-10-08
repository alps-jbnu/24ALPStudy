#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
  dat[--head] = x;
}

void push_back(int x){
  dat[tail++] = x;
}

void pop_front(){
  head++;
}

void pop_back(){
  tail--;
}

int size() {
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

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str;
  int n, x;
  cin >> n;
  while(n--){
    cin >> str;
    if(str == "push_front"){
      cin >> x;
      push_front(x);
    }
    else if(str == "push_back"){
      cin >> x;
      push_back(x);
    }
    else if(str == "pop_front"){
      if(empty()) cout << "-1" << '\n';
      else {
        cout << front() << '\n';
        pop_front();
      }
    }
    else if(str == "pop_back"){
      if(empty()) cout << "-1" << '\n';
      else {
        cout << back() << '\n';
        pop_back();
      }
    }
    else if(str == "size"){
      cout << size() << '\n';
    }
    else if(str == "empty"){
      cout << empty() << '\n';
    }
    else if(str == "front"){
      if(empty()) cout << "-1" << '\n';
      else cout << front() << '\n';
    }
    else{
      if(empty()) cout << "-1" << '\n';
      else cout << back() << '\n';
    }
  }
  return 0;
}
