#include <bits/stdc++.h>
using namespace std;
int pre[5001], nxt[5001];
int unused = 1;
vector<int> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, n, k, cur;
    cin >> n >> k;
    for(i = 1; i <= n; i++){
        pre[i] = (i == 1)? n : i - 1;
        nxt[i] = (i == n)? 1 : i + 1;
    }
    i = 1;
    for(cur = 1; n != 0; cur = nxt[cur]){
        if(i == k){
            v.push_back(cur);
            nxt[pre[cur]] = nxt[cur];
            pre[nxt[cur]] = pre[cur];
            i = 1;
            n--;
        }
        else i++;
    }
    cout << "<";
  for(size_t i = 0; i < v.size(); ++i) {
    cout << v[i];
    if(i != v.size() - 1) cout << ", ";
  }
  cout << ">";
    return 0;
}
