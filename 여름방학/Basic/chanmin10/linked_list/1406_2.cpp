#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  list<char> L;
  string str;
  int len, n;
  char com[2];
  cin >> str;
  len = str.length();
  for(int i = 0; i < len; i++)
    L.push_back(str[i]);
  list<char>::iterator t = L.end();
  cin >> n;
  while(n--) {
    cin >> com[0];
    if(com[0] == 'L') {
      if(t != L.begin()) t--;
    }
    else if(com[0] == 'D') {
      if(t != L.end()) t++;
    }
    else if(com[0] == 'B') {
      if(t != L.begin()) {
        t--;
        t = L.erase(t);
      }
    }
    else if(com[0] == 'P') {
      cin >> com[1];
      L.insert(t, com[1]);
    }
  }
  for(char e : L) {
    cout << e;
  }
  return 0;
}
