#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

/*
* 개미의 움직임을 살펴보면,
* x축에서 오른쪽으로 갔다가 왼쪽으로 갔다가.. 반복
* y축에서 위로 갔다가 아래로 갔다가.. 반복
* 짝수번 만큼 이동했으면 순방향, 홀수번 만큼 이동했으면 역방향
*/

int w, h, t, x, y;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> w >> h >> x >> y >> t;

    x += t;
    y += t;

    if ((x / w) % 2 == 0) x = x % w;
    else x = w - (x % w);
    if ((y / h) % 2 == 0) y = y % h;
    else y = h - (y % h);

    cout << x << ' ' << y << '\n';

    return 0;
}

//시간초과 코드
// 
// int w, h, t, x, y;
//
///*
//* 속도(방향)은 총 4개
//* 0: 오른쪽 위, 1: 오른쪽 아래, 2: 왼쪽 아래, 4: 왼쪽 위
//* 모서리, 오른쪽벽, 위쪽벽, 왼쪽벽, 아래쪽벽
//* 모서리: v = v + 2
//* 오른쪽 벽: 0이면 3, 1이면 2
//* 왼쪽 벽: 3이면 0, 2이면 1
//* 위쪽 벽: 0이면 1, 3이면 2
//* 아래쪽 벽: 1이면 0, 2이면 3
//*/
//int v;
//int dx[4] = { 1, 1, -1, -1 };
//int dy[4] = { 1, -1, -1, 1 };
//
//int main(void) {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> w >> h >> x >> y >> t;
//    v = 0;
//
//    while (t--) {
//        // 모서리
//        if ((x == 0 && (y == 0 || y == h)) || (x == w && (y == 0 || y == h))) v = (v + 2) % 4;
//        // 왼쪽 벽
//        else if (x == 0) v = (v == 3) ? 0 : 1;
//        // 오른쪽 벽
//        else if (x == w) v = (v == 0) ? 3 : 2;
//        // 아래쪽 벽
//        else if (y == 0) v = (v == 1) ? 0 : 3;
//        // 위쪽 벽
//        else if (y == h) v = (v == 0) ? 1 : 2;
//
//        //cout << x << ' ' << y << ' ' << v << '\n';
//
//        x = x + dx[v];
//        y = y + dy[v];
//    }
//
//    cout << x << ' ' << y << '\n';
//
//    return 0;
//}
