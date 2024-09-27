#include <bits/stdc++.h>
using namespace std;

const int MX = 600001;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char ch) {
  dat[unused] = ch;
  pre[unused] = addr;
  nxt[unused] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = unused;
  nxt[addr] = unused;
  unused++;
}

void erase(int addr) {
  nxt[pre[addr]] = nxt[addr];
  pre[nxt[addr]] = pre[addr];
}

void traverse() {
  int cur = nxt[0];
  while(cur != -1) {
    cout << dat[cur];
    cur = nxt[cur];
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill(pre, pre + MX, -1);
  fill(nxt, nxt + MX, -1);
  string str;
  int n, cur;
  char com[2];
  cin >> str;
  cur = str.length();
  for(int i = 0; i < cur; i++)
    insert(i, str[i]);
  cin >> n;
  while(n--) {
    cin >> com[0];
    if(com[0] == 'L') {
      if(pre[cur] != -1) cur = pre[cur];
    }
    else if(com[0] == 'D') {
      if(nxt[cur] != -1) cur = nxt[cur];
    }
    else if(com[0] == 'B') {
      if(pre[cur] != -1){
        erase(cur);
        cur = pre[cur];
      }
    }
    else if(com[0] == 'P') {
      cin >> com[1];
      insert(cur, com[1]);
      cur = nxt[cur];
    }
  }
  traverse();
  return 0;
}
