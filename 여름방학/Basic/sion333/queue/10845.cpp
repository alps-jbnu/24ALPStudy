#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
//
  queue<int> Q;
  int N;
  string opr;
  int inp;
  cin >> N;

  while (N--)
  {
    cin >> opr;
    if (opr == "push"){
      cin >> inp;
      Q.push(inp);
    }
    else if (opr == "pop") {
      if (Q.empty())  cout << "-1\n";
      else {
        cout << Q.front() << '\n';
        Q.pop();
      }
    }
    else if (opr == "empty") cout << Q.empty() << '\n';
    else if (opr == "size") cout << Q.size() << '\n';
    else if (opr == "front") {
      if (Q.empty())  cout << "-1\n";
      else cout << Q.front() << '\n';
    }
    else { // back
      if (Q.empty())  cout << "-1\n";
      else cout << Q.back() << '\n';
    }
  }
  
   return 0;
}
