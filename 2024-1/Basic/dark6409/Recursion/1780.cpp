#include <iostream>
using namespace std;

int n;
int pa[2200][2200] = {}; // 3^7 = 2187
int cnt[3]; // -1, 0, -1

bool check(int x, int y, int n) { // 같은 수로만 채워졌는지 확인
    for (int i = x; i < x + n; i++) {
        for (int j = y; j < y + n; j++) {
            if (pa[x][y] != pa[i][j])
                return false; // 하나라도 다르면 잘라야 함
        }
    }
    return true; // 걸린 게 없으니, 같은 수로만 채워졌다고 판단
}

void algo(int x, int y, int z) { // 종이 자르기 함수. 시작점, 길이 사용
    if (check(x, y, z)) { // 같은 수로만 채워지면
        cnt[pa[x][y] + 1] += 1; // 카운터 인덱스는 0,1,2 고 기준은 -1,0,1 이니까 +1 해줌
        return; // 반환값 없음.
    }
    int n = z / 3; // 종이 '길이'의 3으로 나누기
    for (int i = 0; i < 3; i++) { // 9등분이니까, 3*3
        for (int j = 0; j < 3; j++)
            algo(x + i * n, y + j * n, n); // 함수 순환
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> pa[i][j];
    }

    algo(0, 0, n);

    for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";

    return 0;
}
