#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s; // 최소 하나는 있음
  string ans;
  int c=1;

  int n; cin >> n;
  while(n--){
    int x; cin >> x;
    while(c <= x) { // c부터 목표값까지 stack.push()
      s.push(c++);
      ans += "+\n";
    }
    if(s.top() != x){ // 스택 쌓았는데 목표값이 아닐때. 즉, 정상적으로 작동했음에도 불구하고 실패한 경우
      cout << "NO"<< endl;
      return 0;
    }
    s.pop();
    ans += "-\n";
  }
  cout << ans;
}
