#include <iostream>
using namespace std;

bool c[2000001]={}; //조건이 서로 다른 수랬으니, 배열로 줘도 무방

int main() {
  int n; cin >> n;
  int a[1000001]={};
  int i,cnt=0;

  for(i=0; i<n; i++)
    cin >> a[i];

  int x; cin>>x;

  for(i=0; i<n; i++){ 
    if(x-a[i] >0 && c[x-a[i]]) cnt++;
    // x-a[i]가 양수고 존재하면 카운트
    c[a[i]]=true;
    // c에 a[i]의 존재여부 반영
  }
  cout << cnt;
}
