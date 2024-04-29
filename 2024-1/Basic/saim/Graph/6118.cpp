#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> v[20001];
int visit[20001];
int maxidx, maxnum, maxcnt;

// 1번 노드부터 차례대로 모든 노드 방문, visit배열에 거리 기록
void bfs() {
	queue<int> q;
	q.push(1);
	visit[1] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int nx = v[x][i];
			if (!visit[nx]) {
				visit[nx] = visit[x] + 1;
				q.push(nx);
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	for (int a, b, i = 0; i < M; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs();
	for (int i = 2; i <= N; i++) {
		if (visit[i] > maxnum) {
			maxnum = visit[i];
			maxidx = i;
			maxcnt = 1;
		}
		else if (visit[i] == maxnum)
			maxcnt++;

	}
	//1번 노드의 거리를 1로 뒀기 때문에 최대 거리에서 1을 빼줘야 한다.
	cout << maxidx << " " << maxnum - 1 << " " << maxcnt;
}
