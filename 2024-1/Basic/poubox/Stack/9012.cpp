#include <bits/stdc++.h>

using namespace std;

int t;

bool checkMatching(const string &str) {
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '(')
            s.push(ch);
        else { // ch == ')'
            if (s.empty())
                return false;
            else // s.top() == ')'
                s.pop();
        }
    }
    return s.empty(); // 스택이 전부 비었으면 참, 남아있으면 거짓
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        if (checkMatching(str))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
