#include <bits/stdc++.h>
#include<string.h>
using namespace std;

void parse(string& tmp, deque<int>& d) {
    int cur = 0;
    for (int i = 1; i + 1 < tmp.size(); i++)
    {
        if (tmp[i] == ',') {
            d.push_back(cur);
            cur = 0;
        }
        else {
            cur = 10 * cur + (tmp[i] - '0');
        }
    }
    if (cur != 0){
        d.push_back(cur);
    }
}
char arr[100001];
int t;
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while (t--) {

        deque<int> d;
        int rev = 0;
        int n;
        int cnt = 0;
        char c = 'o'; // 덱이 비었을경우 에러 출력 스위치
        string tmp;

        cin >> arr;
        cin >> n;
        cin >> tmp;
        parse(tmp, d);

        for (int i = 0; i < strlen(arr); i++) {
            if (arr[i] == 'R') {
                cnt++; // cnt가 짝수면 원래 배열, 홀수면 역순 배열
            }
            else if (arr[i] = 'D') {
                if (d.empty()) {
                    c = 'e';
                    break;
                }
                else {
                    if (cnt % 2 == 0) {
                        d.pop_front();
                    }
                    else {
                        d.pop_back();
                    }
                }
            }
        }

        if (c == 'e') {
            cout << "error" << '\n';
        }
        else {
            cout << "[";
            if (d.size() == 0) {
                cout << "]" << "\n";
            }
            else if (cnt % 2 == 0) {
                while (d.size() > 1) {
                    cout << d.front() << ",";
                    d.pop_front();
                }
                cout << d.front() << "]\n";
            }
            else {
                while (d.size() > 1) {
                    cout << d.back() << ",";
                    d.pop_back();
                }
                cout << d.front() << "]\n";
            }
        }
        c = 'o';
        cnt = 0;
    }
        return 0;
    }
