#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, tmp, num, one, arr[1001];
vector<int> v[1001], result;
queue<int> q;

void topologySort() {
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0)
            q.push(i);
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        result.push_back(x);

        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i];
            arr[nx]--;
            if (arr[nx] == 0)
                q.push(nx);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        cin >> one;
        for (int j = 1; j < tmp; j++) {
            cin >> num;
            v[one].push_back(num);
            arr[num]++;
            one = num;
        }
    }
    topologySort();

    if (result.size() == n) {
        for (auto c : result)
            cout << c << "\n";
    }
    else
        cout<<0;
}

