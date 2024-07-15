#include <bits/stdc++.h>
using namespace std;

int n;
int lc[30]; // left child
int rc[30];

void preorder(int cur) { // 맨 처음엔 cur에 1 전달
  cout << char(cur + 'A' - 1);
  if(lc[cur] != 0) preorder(lc[cur]);
  if(rc[cur] != 0) preorder(rc[cur]);
}
void inorder(int cur) {
  if(lc[cur] != 0) inorder(lc[cur]);
  cout << char(cur + 'A' - 1);
  if(rc[cur] != 0) inorder(rc[cur]);
}
void postorder(int cur) {
  if(lc[cur] != 0) postorder(lc[cur]);
  if(rc[cur] != 0) postorder(rc[cur]);
  cout << char(cur + 'A' - 1);
}



int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for(int i=1; i<=n; i++){
    char c, l, r;
    cin >> c >> l >> r; // 부모 노드, 좌우 자식 노드 입력
    if(l != '.') lc[c - 'A'+1] = l -'A'+1; // 좌측 자식노드. 아스키코드로 변환. 배열 인덱스는 0부터 세니까 +1 한 것.
    if(r != '.') rc[c - 'A'+1] = r -'A'+1;
  }

  preorder(1);
  cout << '\n';
  inorder(1);
  cout << '\n';
  postorder(1);
  cout << '\n';

  return 0;
}
