#include <iostream>
#include <stack>
using namespace std;

int main() {
  int k; cin >> k;
  int sum=0, i=0, n;
  stack<int> s;
  
  while(i++ < k){
    cin >> n;
    if(n == 0) {
      sum -= s.top();
      s.pop();
    }
    else {
      s.push(n);
      sum += s.top();
    }
  }
  cout << sum;
}
