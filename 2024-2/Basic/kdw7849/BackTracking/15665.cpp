#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int number[10];

void func(int a) {
    if (a == m) {
        for (int i = 0; i < m; i++)
            cout << number[arr[i]] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        arr[a] = i;
        func(a + 1);
    }
}

vector<bool> check(10002);

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int idx = 0;
    while (n--) {
        cin >> number[idx];
        if (check[number[idx]]) continue;
        check[number[idx]] = true;
        idx++;
    }

    n = idx;
    sort(number, number + n);
    func(0);
}
