#include <bits/stdc++.h>

using namespace std;

int N;
int num[9];
bool visited[9];

void permutation(int idx) {
    if (idx == N) {
        for (int i = 0; i < N; i++) {
            cout << num[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < N; i++) {
        if (visited[i] != true) {
            visited[i] = true;
            num[idx] = i + 1;
            permutation(idx + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N;
    permutation(0);
    return 0;
}
