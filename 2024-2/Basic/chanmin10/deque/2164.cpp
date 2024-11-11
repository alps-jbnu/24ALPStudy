#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<int> de;
    int n;
    cin >> n;
    for(; n > 0; n--) de.push_back(n);
    while(de.size() != 1) {
        de.pop_back();
        de.push_front(de.back());
        de.pop_back();
    }
    cout << de.back();
    return 0;
}
