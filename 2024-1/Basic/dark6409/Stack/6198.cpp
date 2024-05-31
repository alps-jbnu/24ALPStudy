#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  long long ans=0;
  int h;
  
  while(n--){
    cin >> h;
    while(!tower.empty() && tower.top() <= h)
      tower.pop(); // 벤치마킹 안되는(높거나 같은) 높이의 빌딩을 팝
    ans += tower.size(); // 벤치마킹 되는 빌딩 개수 합
    tower.push(h); 
  }
  cout << ans;
}
