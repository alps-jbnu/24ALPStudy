#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n; // m: 조카의 수, n: 과자의 수
    cin >> m >> n; // 조카의 수와 과자의 수를 입력받음
    vector<int> v(n); // 과자의 길이를 저장할 벡터
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // 과자의 길이를 입력받아 벡터에 저장
    }
    sort(v.begin(), v.end()); // 과자의 길이를 오름차순 정렬

    int left = 1; // 이진 탐색의 최소 길이
    int right = v.back(); // 이진 탐색의 최대 길이
    int answer = 0; // 조카들에게 나눠줄 수 있는 과자의 최대 길이

    // 이진 탐색 시작
    while (left <= right) {
        int mid = left + (right - left) / 2; // 중간값 계산
        long long total = 0; // 총 과자 길이
        for (int i = 0; i < v.size(); i++) {
            total += v[i] / mid; // 각 과자를 중간값으로 나눈 몫을 총 길이에 더함
        }

        // 나눠줄 수 있는 과자의 길이가 충분한 경우
        if (total >= m) {
            answer = mid; // 현재 길이를 정답으로 갱신
            left = mid + 1; // 탐색 범위를 더 큰 쪽으로 조정
        }
        // 길이가 부족한 경우
        else {
            right = mid - 1; // 탐색 범위를 더 작은 쪽으로 조정
        }
    }

    // 결과 출력
    cout << answer;

    return 0;
}
