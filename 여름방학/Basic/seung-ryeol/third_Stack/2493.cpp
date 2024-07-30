#include <bits/stdc++.h>
using namespace std;
#define X first // 아마 높이를 의미?
#define Y second // 아마 건물 번호를 의미?

int N;
stack<pair<int, int>> tower;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N; // N번 입력
    tower.push({ 100000001, 0 }); // 0번째 타워. 건물 높이를 최댓값 이상으로 설정해서 1번째 타워가 부딪힐 공간확보 
    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height; // 타워 높이 입력
        while (tower.top().X < height){ // 입력받은 타워 높이보다 작은 타워 스택 pop, top()이 입력받은 타워 높이보다 클 때, while문 해제
            tower.pop();
        }
        cout << tower.top().Y << " "; // 입력받은 타워높이보다 큰 top()의 번호 출력
        tower.push({ height, i }); // 새 타워높이와 타워번호 입력 
    }
    return 0;
}
