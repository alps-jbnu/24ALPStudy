#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
using namespace std;

int r, s;
char photo[3005][3005];
char result[3005][3005];
priority_queue<int, vector<int>, greater<int>> pq;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> s;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < s; j++)
            cin >> photo[i][j];

    // 한 열을 탐색하며 .의 개수 구하기
    // 해당 열에 X가 하나도 없다면 pq에 push하지 않음
    for (int i = 0; i < s; i++) {
        int cnt = 0;
        int flag = 0;
        for (int j = 0; j < r; j++) {
            //cout << photo[j][i];
            if (photo[j][i] == 'X') {
                flag = 1;
                cnt = 0;
            }
            if (photo[j][i] == '.') cnt++;
            if (photo[j][i] == '#') break;
        }
        //cout << '\n';
        if (flag) pq.push(cnt);
    }

    // 출력 부분은 맞음
    int cnt = pq.top();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            result[i][j] = '.';
            if (i - cnt >= 0 && photo[i - cnt][j] == 'X')
                result[i][j] = photo[i - cnt][j];
            if (photo[i][j] == '#')
                result[i][j] = photo[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            cout << result[i][j];
        }
        cout << '\n';
    }

    return 0;
}
