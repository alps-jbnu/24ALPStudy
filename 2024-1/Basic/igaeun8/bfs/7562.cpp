#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;

int a[301][301]; // 체스판 이동 경로에 이동 횟수 기록용

int dx[] = { 1,2,2,1,-1,-2,-1,-2 };
int dy[] = { 2,1,-1,-2,-2,-1,2,1 };

queue <pair<int, int>> q;

int t; // 테스트 케이스 개수
int i; // 한 변의 길이 (체스판 크기 : ixi)


void bfs() {
	while (!q.empty())
	{
		int x = q.front().first; // x1값
		int y = q.front().second; // y1값

		q.pop();

		for (int k = 0; k < 8; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];

			if (0 <= nx && nx < i && 0 <= ny && ny < i)
			{
				if (a[nx][ny] == -1) // 아직 지나가지 않은 경로라면 
					// (첫번째로 그 지점이 채워지면, 즉 갈수있는 방향으로 모두 가보기 때문에 도착점에 먼저 도착하는 순간이 최소횟수가 됨)
				{
					a[nx][ny] = a[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {
	cin >> t;

	while (t--)
	{
		memset(a, -1, sizeof(a)); // 기본 초기화 -1

		int x1, y1; // 나이트가 현재있는 칸
		int x2, y2; // 나이트가 이동하려고 하는 칸

		cin >> i;
		cin >> x1 >> y1;
		cin >> x2 >> y2;

		q.push(make_pair(x1, y1));
		a[x1][y1] = 0; // 시작 값 0으로 초기화

		bfs();

		cout << a[x2][y2] << '\n';
	}

	return 0;
}
