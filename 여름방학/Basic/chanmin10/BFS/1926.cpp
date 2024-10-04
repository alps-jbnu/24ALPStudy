#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

queue<pair<int, int> > q;
int dx[4] = {-1, 0, 1, 0},
    dy[4] = {0, 1, 0, -1},
    n, m, board[500][500];
bool vis[500][500];

int area(int x, int y){
    int cnt = 1;
    q.push({x,y});
    vis[x][y] = 1;
    while(!q.empty()){
        pair<int,int> cur = q.front(); q.pop();
        x = cur.first, y = cur.second;
        for(int i = 0; i < 4; i++){
            int side[2] = {x + dx[i], y + dy[i]};
            if(side[0] < 0 || side[0] >= n || side[1] < 0 || side[1] >= m) continue;
            if(!board[side[0]][side[1]] || vis[side[0]][side[1]]) continue;
            q.push({side[0],side[1]});
            vis[side[0]][side[1]] = 1;
            cnt++;
        }
    }
    return cnt;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0, compare, cnt = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> board[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(board[i][j] && !vis[i][j]){
                compare = area(i,j);
                if(max < compare) max = compare;
                cnt++;
            }
    cout << cnt << '\n' << max;
    return 0;
}
