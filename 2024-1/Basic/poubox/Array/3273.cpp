#include <bits/stdc++.h>

using namespace std;

int n, x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    cin >> x;

    int ans = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (v[left] + v[right] < x)
            left++;
        else if (v[left] + v[right] > x)
            right--;
        else {
            left++;
            right--;
            ans++;
        }
    }

    cout << ans;

    return 0;
}
