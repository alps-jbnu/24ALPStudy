// 5874: 소를 찾아라
#include <bits/stdc++.h>

using namespace std;

string text;
int front_legs[50001], ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> text;
    for (int i = 0; i < text.length() - 1; i++) {
        if (i > 0) front_legs[i] = front_legs[i - 1];
        if (text[i] == '(' && text[i + 1] == '(') {
            front_legs[i] += 1;
        } else if (text[i] == ')' && text[i + 1] == ')') {
            ans += front_legs[i];
        }
    }
    cout << ans;
    return 0;
}
