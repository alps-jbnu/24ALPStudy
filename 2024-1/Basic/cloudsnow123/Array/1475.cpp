#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;
    cin >> n;

    int arr[10] = {0,};

    while (1) {
        arr[n % 10]++;
        if (n / 10 == 0) break;
        n /= 10;
    }

    int num = 0;
    for (int i = 0; i < 10; i++) {
        if (i != 9 && i != 6) {
            num = max(num, arr[i]); // 10으로 나누어 올림해서 저장
        }
    }

    cout << max(num, (arr[6] + arr[9] + 1) / 2); // 6 or 9 는 더해서 2로 나누어 ( 같이 사용하기 때문 ) 저장

    return 0;
}
