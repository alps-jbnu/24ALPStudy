#include <iostream>
using namespace std;
/*1.노드 1에서 노드 3으로 연결된 길이 있는지 물어봤다면
-노드1에서 노드2를 거쳤다가 노드3으로 가는 길이 있는지
-노드1에서 노드4를 거쳤다가 노드3으로 가는 길이 있는지
...이런 방식으로 확인하면서 그래프 값 갱신...*/
int g[101][101];
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> g[i][j];
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (g[i][k] && g[k][j]) {
					g[i][j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << g[i][j] << " ";
		}cout << endl;
	}

}
