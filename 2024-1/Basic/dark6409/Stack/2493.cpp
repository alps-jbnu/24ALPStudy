// 정답
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
stack<pair<int, int>> tower; // 높이, 탑 순서 push

int main() {
  // 아래 둘은 입출력 방식으로 인한 시간 지연 감소. 안해주면 시간 초과
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  
  tower.push({100000001,0});// 탑 스택 초기화(기준점이 되는 가상의 0번 탑)
  
  for(int i=1; i<=n; i++){
    int h; cin >> h;
  
    while(tower.top().X < h) // 탑 높이가 현재 높이보다 작으면
      tower.pop(); // 이전 순서 탑으로
    
    cout << tower.top().Y << " "; // 레이저 받은 탑 순서 출력
    
    tower.push({h,i}); // 탑 높이, 순서 push
  }
}


// 시간 초과
#include <iostream>
#include <stack>
using namespace std;

int main() {
  int h[500001]={0,}, n; cin>>n;
  for(int i=1; i<=n; i++)
    cin >> h[i];
    
  int ans[500001];
  int j=n;
  while(n > 1){
    if(h[n] <= h[n-1]){
      ans[n] = n-1;
    }
    else if(h[n] > h[n-1]){
      int p=n;
      while(p--){
        if(h[n] <= h[p]){
          ans[n] = p;
          break;
        }
      }
    }
    n--;
  }
  for(int i=1; i<=j; i++)
    cout << ans[i] << " ";
}
