#include <bits/stdc++.h>

using namespace std;
#define MAX 9

int n, m;
int arr[MAX];
bool isused[MAX];

void func(int k, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    } else {
        for (auto i = 1; i <= n; i++) {
            if (!isused[i]) {
                isused[i] = true;
                arr[cnt] = arr[i - 1];
                func(i + 1, cnt + 1);
                isused[i] = false;
            }
        }
    }
}


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    func(1, 0);

    return 0;
}
