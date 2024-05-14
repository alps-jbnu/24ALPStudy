// 9440: 숫자 더하기
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true) {
        int N; cin >> N;
        if (N == 0) break;
        vector<int> num;
        int zero_cnt = 0;
        for (int i = 0; i < N; i++) {
            int temp; cin >> temp;
            num.push_back(temp);
            if (temp == 0) zero_cnt += 1;
        }
        sort(num.begin(), num.end());
        if (zero_cnt == 1) swap(num[0], num[2]);
        if (zero_cnt >= 2) {
            swap(num[0], num[zero_cnt]);
            swap(num[1], num[zero_cnt + 1]);
        }
        string first = "", second = "";
        for (int i = 0; i < num.size(); i++) {
            string n = to_string(num[i]);
            if (i % 2 == 0) first += n;
            else second += n;
        }
        cout << stoi(first) + stoi(second) << '\n';
    }
    return 0;
}
