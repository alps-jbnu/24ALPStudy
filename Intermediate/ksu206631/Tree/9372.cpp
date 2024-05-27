#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solveTestCase() {
    int nodes, edges;
    cin >> nodes >> edges;
    
    vector<vector<int>> adjList(nodes + 1);
    vector<bool> visited(nodes + 1, false);

    for (int i = 0; i < edges; ++i) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int result = 0;
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                result++;
                q.push(neighbor);
            }
        }
    }

    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solveTestCase();
    }

    return 0;
}
