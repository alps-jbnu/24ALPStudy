#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;

int N, M;
int parent[1001];
double ans;
vector<pair<int, int>> gods;
vector<tuple<double, int, int>> distances;

int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

bool unionNodes(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    parent[u] = v;
    return true;
}

double calculateDistance(int x1, int y1, int x2, int y2) {
    double xDist = pow(x1 - x2, 2);
    double yDist = pow(y1 - y2, 2);
    return sqrt(xDist + yDist);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;

    // 자기 자신을 부모로 지정
    for (int i = 1; i <= N; ++i) {
        parent[i] = i;
    }

    // 우주신들의 좌표 입력
    gods.push_back({0, 0}); // 0번 인덱스는 사용하지 않음
    for (int i = 1; i <= N; ++i) {
        int x, y;
        cin >> x >> y;
        gods.push_back({x, y});
    }

    // 이미 연결된 통로들 입력
    for (int i = 1; i <= M; ++i) {
        int u, v;
        cin >> u >> v;
        unionNodes(u, v);
    }
    
    // i번 우주신과 j번 우주신 사이의 거리 계산
    for (int i = 1; i <= N - 1; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            double distance = calculateDistance(gods[i].first, gods[i].second, gods[j].first, gods[j].second);
            distances.push_back({distance, i, j});
        }
    }

    // 거리 기준으로 정렬
    sort(distances.begin(), distances.end());

    // MST 계산
    for (const auto& [distance, x, y] : distances) {
        if (unionNodes(x, y)) {
            ans += distance;
        }
    }

    // 결과 출력
    printf("%.2f\n", ans);

    return 0;
}
