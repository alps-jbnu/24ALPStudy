
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--){
    multiset<int> s; // 오름차순으로 정렬됨
    int k;
    cin >> k;
    while(k--){
      char order;
      cin >> order;

      if(order == 'D') {
        int n; cin >> n;
        if(s.empty()) continue;
        if(n==1) s.erase(prev(s.end())); // "D 1"은 최댓값을 삭제하는 연산이랬잖아. s.end() 는 마지막 원소의 한 칸 뒤를 가리키기 때문에, prev() 으로 접근
        else s.erase(s.begin());
      }
      else {
        int n; cin >> n;
        s.insert(n);}
    }
    if(s.empty()) cout << "EMPTY\n";
    else {
      cout << *prev(s.end()) << ' ' << *s.begin() << '\n';}
  }
}
