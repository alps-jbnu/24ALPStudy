#include <bits/stdc++.h>
using namespace std;

int main(void) {
  stack<int> st;
  int K, inp;
  int sum = 0;
  cin >> K;
  while (K--)
  {
    cin >> inp;
    if (inp) st.push(inp);
    else st.pop();
  }
  while (!st.empty())
  {
    sum += st.top();
    st.pop();
  }
  cout << sum;
  
}
