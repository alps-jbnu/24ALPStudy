// 16945: 매직 스퀘어로 변경하기
#include <bits/stdc++.h>

using namespace std;

int cur[3][3];
int magic[3][3] = {
        4, 9, 2,
        3, 5, 7,
        8, 1, 6
};

int get_magic(int i, int j, int type) {
    if (type == 1) return magic[2 - i][j];
    else if (type == 2) return magic[2 - i][2 - j];
    else if (type == 3) return magic[i][2 - j];
    else if (type == 4) return magic[j][i];
    else if (type == 5) return magic[2 - j][i];
    else if (type == 6) return magic[2 - j][2 - i];
    else if (type == 7) return magic[j][2 - i];
    return magic[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> cur[i][j];
        }
    }
    int ans = INT_MAX;
    for (int t = 0; t < 8; t++) {
        int sum_diff = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                sum_diff += abs(get_magic(i, j, t) - cur[i][j]);
            }
        }
        ans = min(ans, sum_diff);
    }
    cout << ans;
    return 0;
}
