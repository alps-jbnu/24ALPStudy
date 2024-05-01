#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n,m,year;
int area[300][300] = {}; // 바다 위 빙산 배열
int vis[300][300] = {}; // 방문 배열
int dx[4] = {1,0,-1,0}; // 4방향 체크에서 좌우
int dy[4] = {0,1,0,-1}; // 4방향 체크에서 상하

bool check(int i, int j){ // 실제 배열 안에 있는지 확인
  return (i >=0 && i < n && j >=0 && j < m);
}


void initvis(){
  for(int i=0; i<n; i++)
    fill(vis[i], vis[i]+m, 0); // 0으로 초기화
  // fill(초기화 시킬 부분의 시작 주소, 초기화 시킬 부분의 끝 주소, 초기화할 값)
}

void melting(){
  int zero[300][300] = {}; // 녹는 정도 계산용 배열
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(area[i][j] == 0) continue; // 빙산 없으니 패스
      for(int dir=0; dir<4; dir++){ // 4방향 0을 체크
        int nx = i + dx[dir];
        int ny = j + dy[dir];
        if(check(nx,ny) && area[nx][ny] == 0) zero[i][j]++;
      }
    }
  }
  
  for(int i=0; i<n; i++){ // 빙산 얼만큼 녹일까
    for(int j=0; j<m; j++)
      area[i][j] = max(0, area[i][j] - zero[i][j]);
  }
}

// 0 : 빙산 다 녹음, 1 : 빙산 한 덩이, 2 : 빙산 분리됨
int status(){
  int x,y;
  int cnt1 = 0; // 빙산 개수

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(area[i][j]){ // 빙산이 존재하면
        x = i;
        y = j;
        cnt1++;
      }
    }
  }
  if(cnt1 == 0) return 0; // 빙산이 없음
  int cnt2 = 0; // (x,y)와 붙어있는 빙산의 수

  queue<pair<int,int>> q; // <int, int>형식의 데이터를 다룰 큐
  vis[x][y] = 1; // 현재 위치 방문
  q.push({x,y});

  while(!q.empty()){ // bfs 연산
    auto cur = q.front(); q.pop();
    cnt2++;
    for(int i=0; i<4; i++){ // 4방향 체크
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];
      if(!check(nx,ny) || vis[nx][ny] == 1 || area[nx][ny] <= 0) continue; // 정상 범위, 첫 방문, 이동가능 체크
      vis[nx][ny] = 1; // 방문 표시
      q.push({nx, ny}); // 이동
    }
  }
  if(cnt1 == cnt2) return 1; // 전체 빙산 수 == (x,y)랑 붙어있는 빙산 수가 동일. 즉, 분리 안된 상태
  return 2; 
}


int main() {
  cin >> n >> m;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
      cin >> area[i][j];
  }

  while(true){
    year++; // 햇수 증가
    melting(); // 빙산 녹음
    initvis(); // 방문배열 초기화
    int check = status(); // 빙산 상태 확인
    if(check == 0){ // 빙산 다 녹을때까지 분리 안 됨
      cout << 0;
      return 0;
    }
    else if(check == 1) continue; // 빙산이 한 덩이
    else break; // check=2, 빙산이 분리됨
  }

  cout << year;  
  return 0;
}
