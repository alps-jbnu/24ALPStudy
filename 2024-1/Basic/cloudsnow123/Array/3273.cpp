#include <bits/stdc++.h>

using namespace std;

int number[100002];

//O(n^2) 이중 for문을 사용하면 시간초과에 도달하여 실패하게 된다
//pointer를 써서 이중 for을 사용하지 않으면 될거 같다.

// 도대체 어디가 틀린걸까.. 선언 방식? ios를 안 적어서?
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    sort(number, number + n); // 먼저 배열을 정렬하고

    int result;
    cin >> result;

    int left = 0;
    int right = n - 1;
    int cnt = 0;

    while (left < right) { // 버블정렬 느낌으로 왼쪽에서 오른쪽으로 이동하며 두 수 더한 값이 result 보다 적으면 상황에 맞추어 이동
        if (number[left] + number[right] == result) {
            cnt++;
            right--;
        } else if (number[left] + number[right] > result) {
            right--;
        } else {
            left++;
        }
    }

    cout << cnt;

    return 0;
}
